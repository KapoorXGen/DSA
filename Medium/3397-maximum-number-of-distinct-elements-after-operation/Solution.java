import java.util.Arrays;

class Solution {
    public int maxDistinctElements(int[] nums, int k) {
        Arrays.sort(nums);
        int minAvailable = Integer.MIN_VALUE;
        int count = 0;

        for (int x : nums) {
            int left = x - k;
            int right = x + k;

            if (right < minAvailable) {
                continue;
            }

            int chosen = Math.max(left, minAvailable);
            minAvailable = chosen + 1;
            count++;
        }

        return count;
    }
}
