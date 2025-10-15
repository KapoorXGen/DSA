public class PowerXtoN {
    public static int pow(int x, int n) {
        if (n == 0 || x == 1) return 1;
        if (x == 0) return 0;

        return x * pow(x, n - 1);
    }

    public static void main(String[] args) {
        System.out.println("2 to the power 8 is: " + pow(2, 8));
    }
}
