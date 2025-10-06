import java.util.*;

public class FindIt {

    public int firstMissingPositive(int[] nums) {
        HashSet<Integer> set = new HashSet<>();

        // Step 1: Only positive numbers ko add karo set me
        for (int num : nums) {
            if (num > 0) {
                set.add(num);
            }
        }

        // Step 2: 1 se n+1 tak check karo kaunsa number missing hai
        for (int i = 1; i <= nums.length + 1; i++) {
            if (!set.contains(i)) {
                return i;
            }
        }

        return -1; // theoretically kabhi reach nahi hota
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int n = in.nextInt();

        int[] nums = new int[n];
        System.out.println("Enter " + n + " numbers:");
        for (int i = 0; i < n; i++) {
            nums[i] = in.nextInt();
        }

        FindIt obj = new FindIt();
        int result = obj.firstMissingPositive(nums);

        System.out.println("First missing positive number is: " + result);
    }
}
