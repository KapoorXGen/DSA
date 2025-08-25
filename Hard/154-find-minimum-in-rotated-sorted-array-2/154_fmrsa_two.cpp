#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& nums) {
    int start = 0, end = nums.size() - 1;
    while (start < end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] < nums[end]) {
            end = mid;
        } else if (nums[mid] > nums[end]) {
            start = mid + 1;
        } else {
            end--;
        }
    }
    return nums[start];
}

int main() {
    vector<int> nums = {3, 3, 1, 3};
    cout << findMin(nums);
    return 0;
}