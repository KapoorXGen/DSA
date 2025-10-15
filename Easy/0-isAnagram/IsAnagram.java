import java.util.Scanner;

public class IsAnagram {
    public static boolean isAnagram(String w1, String w2) {

        if (w1.length() != w2.length()) return false;

        int[] count = new int[26];
        for (int i = 0; i < w1.length(); i++) {
            count[w1.charAt(i) - 'a']++;
            count[w2.charAt(i) - 'a']--;
        }

        for (int num : count) {
            if (num != 0) return false;
        }

        return true;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter first word: ");
        String word1 = input.next();

        System.out.print("Enter Second word: ");
        String word2 = input.next();

        if (isAnagram(word1.toLowerCase(), word2.toLowerCase())) {
            System.out.println(word1 + " & " + word2 + " is Anagram");
        } else {
            System.out.println(word1 + " & " + word2 + " is not Anagram");

        }
    }
}