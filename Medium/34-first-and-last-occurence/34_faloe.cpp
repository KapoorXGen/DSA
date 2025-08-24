#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& nums, int target, bool findFirst) {
    int start = 0, end = nums.size() - 1, ans = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target) {
            ans = mid;
            if (findFirst) {
                end = mid - 1;  // left side jao
            } else {
                start = mid + 1;  // right side jao
            }
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

vector<int> searchRange(vector<int>& nums, int target) {
    int first = binarySearch(nums, target, true);
    if (first == -1) return {-1, -1}; 
    int last = binarySearch(nums, target, false);
    return {first, last};
}

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = searchRange(nums, target);
    cout << "First Occurrence: " << result[0] << endl;
    cout << "Last Occurrence: " << result[1] << endl;
    return 0;
}
