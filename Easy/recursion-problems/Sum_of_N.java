import java.util.Scanner;

public class Sum_of_N {

    public static int fun(int n) {
        if (n == 1) {
            return 1;
        }
        return n + fun(n - 1);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = input.nextInt();

        System.out.print("Sum of " + n + " is " + fun(n));
    }
}