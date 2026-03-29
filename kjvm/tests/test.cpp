#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2.hpp"

#include <filesystem>
#include <array>
#include <cstdio>
#include <cstdlib>
#include <string>

#include "ClassHeap.h"
#include "JavaClass.h"
#include "kjvm.h"

bool g_debug = false;

TEST_CASE( "Load java/lang/String", "[ClassHeap]" ) {
    ClassHeap heap;
    const auto exeDir = std::filesystem::canonical("/proc/self/exe").parent_path();
    heap.AddClassRoot((exeDir / "../lib").lexically_normal().string());
    JavaClass klass;
    bool loaded = heap.LoadClass("java/lang/String", &klass);
    REQUIRE(loaded);
}

static std::pair<int, std::string> RunAndCapture(const std::string& cmd) {
    std::array<char, 256> buffer{};
    std::string output;
    FILE* pipe = popen(cmd.c_str(), "r");
    if (!pipe) {
        return {-1, ""};
    }

    while (fgets(buffer.data(), static_cast<int>(buffer.size()), pipe) != nullptr) {
        output += buffer.data();
    }

    int status = pclose(pipe);
    return {status, output};
}

TEST_CASE("Execute extensive bytecode coverage class", "[integration]") {
    const auto exeDir = std::filesystem::canonical("/proc/self/exe").parent_path();
    const auto libDir = (exeDir / "../lib").lexically_normal();
    const auto hmjvmBin = (exeDir / "hmjvm").lexically_normal();

    const std::string compileCmd = "cd " + libDir.string() + " && javac ExtensiveTest.java";
    int compileStatus = std::system(compileCmd.c_str());
    REQUIRE(compileStatus == 0);

    const std::string runCmd = hmjvmBin.string() + " ExtensiveTest";
    auto [runStatus, output] = RunAndCapture(runCmd);
    REQUIRE(runStatus == 0);
    REQUIRE(output.find("EXT-START\n") != std::string::npos);
    REQUIRE(output.find("LF:59:") != std::string::npos);
    REQUIRE(output.find("EXT:1253\n") != std::string::npos);
}
