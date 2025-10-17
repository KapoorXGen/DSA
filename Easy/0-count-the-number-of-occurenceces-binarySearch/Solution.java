import java.util.Scanner;

public class Solution {

    public static int firstOccurrence(int[] nums, int n, int k) {
        int start = 0, end = n - 1;
        int ans = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == k) {
                ans = mid;
                end = mid - 1;
            } 
            else if (nums[mid] < k) {
                start = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }
        return ans;
    }

    public static int lastOccurrence(int[] nums, int n, int k) {
        int start = 0, end = n - 1;
        int ans = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == k) {
                ans = mid;
                start = mid + 1;
            } 
            else if (nums[mid] < k) {
                start = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }
        return ans;
    }

    public static int countOccurences(int[] nums, int n, int k) {
        int first = firstOccurrence(nums, n, k);
        int last = lastOccurrence(nums, n, k);

        if (first == -1) return 0;
        return (last - first) + 1;
    }

    public static void main(String[] args) {
        System.out.print("Enter the size of the array: ");
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();

        int[] arr = new int[n];
        System.out.print("Enter array elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = input.nextInt();
        }

        System.out.print("Enter the target: ");
        int k = input.nextInt();

        int res = countOccurences(arr, n, k);
        System.out.print("Total occurences is " + res);
    }
}
