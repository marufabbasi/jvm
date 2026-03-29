cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)

project(hmjvm VERSION 0.1)

find_package(OpenSSL QUIET)
if(OpenSSL_FOUND)
  message("OpenSSL include dir: ${OPENSSL_INCLUDE_DIR}")
  message("OpenSSL libraries: ${OPENSSL_LIBRARIES}")
  include_directories(${OPENSSL_INCLUDE_DIR})
endif()

add_executable(hmjvm kjvm.cpp logging.cpp JavaClass.cpp ClassHeap.cpp ExecutionEngine.cpp ObjectHeap.cpp NativeMethods.cpp opcodes.cpp FilePathManager.cpp)

if(OpenSSL_FOUND)
  target_link_libraries(hmjvm ${OPENSSL_LIBRARIES})
endif()

add_executable(hmjvmtest tests/test.cpp JavaClass.cpp ClassHeap.cpp ExecutionEngine.cpp ObjectHeap.cpp NativeMethods.cpp opcodes.cpp FilePathManager.cpp)
target_include_directories(hmjvmtest PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
)
