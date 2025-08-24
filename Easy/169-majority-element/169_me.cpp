#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums){
    int count = 0, candidate = 0;
    for (int num : nums){
        if (count == 0) candidate = num;
        count = num == candidate ? count + 1 : count - 1;
    }

    count = 0;
    for (int num : nums) count = (candidate == num) ? count + 1 : count + 0;
    return count > nums.size() / 2 ? candidate : -1;
}

int main(){
    vector<int> nums = {3, 2, 3};
    cout << "Majority Element is " << majorityElement(nums);
}