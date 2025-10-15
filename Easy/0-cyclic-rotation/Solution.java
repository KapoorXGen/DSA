import java.util.Scanner;

public class Solution {
    public static int[] cyclicRotation(int[] arr, int k) {

        int n = arr.length;
        int[] ans = new int[n];

        k = k % n;
        for (int i = 0; i < n; i++) {
            ans[(k + i) % n] = arr[i];
        }
        return ans;
    }

    public static void main(String[] args) {

        int[] arr = { 1, 2, 3, 4, 5 };

        Scanner input = new Scanner(System.in);
        System.out.print("Enter a the number of rotation: ");
        int k = input.nextInt();

        int[] ans = cyclicRotation(arr, k);

        for (int num : ans) {
            System.out.print(num + " ");
        }
    }
}
