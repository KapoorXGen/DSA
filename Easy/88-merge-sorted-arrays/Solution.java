public class Solution {

    public static int[] mergeArrays(int[] num1, int[] num2) {

        int m = num1.length, n = num2.length;
        int[] ans = new int[m + n];
        int i = 0, j = 0, k = 0;

        while (i < n || j < m) {
            if (i < n && (j >= m || num1[i] < num2[j])) {
                ans[k++] = num1[i++];
            } 
            else {
                ans[k++] = num2[j++];
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        int[] num1 = { 1, 2, 3 };
        int[] num2 = { 2, 5, 6 };
        int[] ans = mergeArrays(num1, num2);
        for (int num : ans) {
            System.out.print(num + " ");
        }
    }
}
