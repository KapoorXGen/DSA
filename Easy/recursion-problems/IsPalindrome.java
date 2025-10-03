import java.util.Scanner;

public class IsPalindrome {
    public static boolean checkPalindrome(String word, int left, int right) {
        if (left >= right) return true;
        if (word.charAt(left) != word.charAt(right)) return false;
        return checkPalindrome(word, left + 1, right - 1);
    }

    public static void main(String[] args) {
        System.out.print("Enter a word: ");
        Scanner input = new Scanner(System.in);
        String word = input.nextLine();
        
        if(checkPalindrome(word, 0, word.length() - 1)){
            System.out.println(word + " is a palindrome");
        }
        else{
            System.out.println(word + " is not a palnidrome");
        }
    }
}
