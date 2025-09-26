
public class Sum_of_N {

    public static int fun(int n) {
        if (n == 1) {
            return 1;
        }
        return n + fun(n - 1);
    }

    public static void main(String[] args) {
        System.out.print("Sum of " + 5 + " is " + fun(5));
    }
}