import java.util.HashMap;
import java.util.Scanner;

public class PalindromePermutation {
    public static boolean isPalindromePossible(String s) {

        HashMap<Character, Integer> freq = new HashMap<>();

        for (char ch : s.toCharArray()) {
            freq.put(ch, freq.getOrDefault(ch, 0) + 1);
        }

        int oddCount = 0;
        for (int count : freq.values()) {
            if (count % 2 != 0) oddCount++;
        }

        return oddCount <= 1;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the number of testcases: ");
        int t = input.nextInt();

        while (t-- > 0) {
            String s = input.next();
            if (isPalindromePossible(s)) {
                System.out.println("True");
            } else {
                System.out.println("False");
            }
        }

    }
}
