public class ExtensiveTest {
    public int x;

    public ExtensiveTest() {
        x = 1;
    }

    public native void Print(String p);

    public static int StaticMul(int a, int b) {
        return a * b;
    }

    public static int MathOps(int a, int b) {
        return (a + b) - (a / b);
    }

    public int Inc(int a) {
        return a + 1;
    }

    public int SumLoop(int n) {
        int s = 0;
        int i = 0;
        while (i < n) {
            s = s + i;
            i = i + 1;
        }
        return s;
    }

    public int Comparisons(int a, int b) {
        int score = 0;
        if (a == b) score = score + 1;
        if (a != b) score = score + 2;
        if (a < b) score = score + 4;
        if (a >= b) score = score + 8;
        if (a > b) score = score + 16;
        if (a <= b) score = score + 32;
        return score;
    }

    public int ZeroChecks(int v) {
        int score = 0;
        if (v == 0) score = score + 1;
        if (v != 0) score = score + 2;
        if (v < 0) score = score + 4;
        if (v >= 0) score = score + 8;
        if (v > 0) score = score + 16;
        if (v <= 0) score = score + 32;
        return score;
    }

    public int ManyLocals() {
        int a0 = 1;
        int a1 = 2;
        int a2 = 3;
        int a3 = 4;
        int a4 = 5;
        int a5 = 6;
        return a0 + a1 + a2 + a3 + a4 + a5;
    }

    public int ConstPoolOps() {
        int base = -1 + 0 + 1 + 2 + 3 + 4 + 5;
        int bp = 100;
        int sp = 1000;
        return base + bp + sp;
    }

    public int ArrayOps() {
        int[] arr = new int[4];
        arr[0] = 1;
        arr[1] = 2;
        arr[2] = arr[0] + arr[1];

        Object[] objs = new Object[2];
        objs[0] = new Object();
        objs[1] = new StringBuilder();
        Object tmp = objs[1];

        Object n = null;
        Object keep = n;
        keep = tmp;
        arr[3] = arr[2] + arr[1];
        return arr[3];
    }

    public int LongFloatOps() {
        long a = 1L;
        long b = 58L;
        float f0 = 1.5f;
        float f1 = 2.5f;

        StringBuilder sb = new StringBuilder();
        sb.append("LF:");
        sb.append(a + b);
        sb.append(":");
        sb.append(f0);
        sb.append(":");
        sb.append(f1);
        sb.append("\n");
        Print(sb.toString());
        return 0;
    }

    public int Entry() {
        Print("EXT-START\n");

        int a = 2;
        int b = 3;
        int c = StaticMul(a, b);
        c = c + Inc(4);

        if (c > 0) {
            c = c + 1;
        } else {
            c = c - 1;
        }

        int[] arr = new int[3];
        arr[0] = c;
        arr[1] = 7;
        int d = arr[0] + arr[1];
        this.x = d;
        int e = this.x;

        Object[] objs = new Object[1];
        objs[0] = new Object();
        Object tmp = objs[0];

        int total = e + SumLoop(4) + MathOps(9, 3);
        total = total + Comparisons(2, 3);
        total = total + ZeroChecks(0);
        total = total + ManyLocals();
        total = total + ConstPoolOps();
        total = total + ArrayOps();
        total = total + LongFloatOps();

        StringBuilder sb = new StringBuilder();
        sb.append("EXT:");
        sb.append(total);
        sb.append("\n");
        Print(sb.toString());

        return total;
    }
}
