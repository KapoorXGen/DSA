public class Solution {
    public static void removeDuplicates(int[] arr, int n) {
        int i = 0;
        for (int num : arr) {
            if (i < 2 || arr[i - 2] != num) {
                arr[i++] = num;
            }
        }

        // Printing the valid part portion only
        for (int j = 0; j < i; j++) {
            System.out.print(arr[j] + " ");
        }
    }

    public static void main(String[] args) {
        int[] arr = { 2, 2, 2, 3, 4, 4, 4, 5, 5, 5, 6 };
        removeDuplicates(arr, arr.length);
    }
}
