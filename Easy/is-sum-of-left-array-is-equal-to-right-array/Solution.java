public class Solution {
    public static int partition(int[] arr, int n) {
        int[] prefix = new int[n];
        int[] suffix = new int[n];

        prefix[0] = arr[0];
        for (int i = 1; i < arr.length; i++) {
            prefix[i] = prefix[i - 1] + arr[i];
        }

        suffix[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + arr[i];
        }

        for (int i = 0; i < n; i++) {
            long left = (i == 0) ? 0 : prefix[i - 1];
            long right = (i == n - 1) ? 0 : suffix[i + 1];

            if (left == right) return i;
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] arr = { 10, 5, 1, 7, 2 };
        int ans = partition(arr, arr.length);
        System.out.print("Index is " + ans);
    }
}
