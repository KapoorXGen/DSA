import java.util.Scanner;

public class ReverseWord {
    public static String reverseSentence(String s) {
        s = s.trim();
        String[] words = s.split("\\s+");

        StringBuilder sb = new StringBuilder();

        for (int i = words.length - 1; i >= 0; i--) {
            sb.append(words[i]);
            if (i != 0) sb.append(" ");
        }
        return sb.toString();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a sentence: ");
        String input = sc.nextLine();

        String reversed = reverseSentence(input);
        System.out.println("Reversed sentence: " + reversed);

        sc.close();
    }
}
