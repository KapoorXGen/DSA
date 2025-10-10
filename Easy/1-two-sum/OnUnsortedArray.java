import java.util.HashMap;

class OnUnsortedArray {
    public static int[] twoSumInUnsortedArray(int[] nums, int target) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int[] ans = new int[2];

        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];

            if (map.containsKey(complement)) {
                ans[0] = map.get(complement);
                ans[1] = i;
                return ans;
            }

            map.put(nums[i], i);
        }

        return ans;
    }

    public static void main(String[] args) {
        int[] nums = { 5, 1, 4, 2, 3 };
        int[] ans = twoSumInUnsortedArray(nums, 6);
        for (int num : ans) {
            System.out.print(num + " ");
        }
    }
}
