#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> nums) {
    int currUnique = nums[0], k = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != currUnique) {
            nums[k] = nums[i];
            currUnique = nums[i];
            k++;
        }
    }
    return k;
}

int main() {
    vector<int> nums1 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    vector<int> nums2 = {1, 1, 1, 2, 2, 3, 4};
    vector<int> nums3 = {1, 1, 2};

    cout << "Test case 1: " << removeDuplicates(nums1) << endl;
    cout << "Test case 2: " << removeDuplicates(nums2) << endl;
    cout << "Test case 3: " << removeDuplicates(nums3) << endl;
    return 0;
}