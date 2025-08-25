#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& nums) {
    int start = 0, end = nums.size() - 1;
    int ans = 5001;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (nums[start] <= nums[mid] && nums[mid] <= nums[end]) {
            end = mid - 1;
            if (ans > nums[mid]) ans = nums[mid];
        } else if (nums[start] >= nums[mid] && nums[mid] <= nums[end]) {
            start++;
            end--;
        } else {
            start = mid + 1;
            if (ans > nums[mid]) ans = nums[mid];
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {3, 4, 5, 1, 2};
    cout << findMin(nums);
    return 0;
}