public class Reverse {
    public static String reverseString(String str) {
        if (str.isEmpty()) {
            return str;
        }
        return reverseString(str.substring(1)) + str.charAt(0);
    }

    public static int reverseInt(int n, int rev) {
        if (n == 0) {
            return rev;
        }
        rev = rev * 10 + n % 10;
        return reverseInt(n / 10, rev);
    }

    public static void main(String[] args) {
        System.out.println("Reverse of Hello is " + reverseString("Hello"));
        System.out.println("Reverse of 12345 is " + reverseInt(12345, 0));
    }
}
