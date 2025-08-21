#include<iostream>
#include<vector>
using namespace std;

int findPeakElement(vector<int>& nums){
    int start = 1, end = nums.size() - 2;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid + 1]){
            return nums[mid];
        }
        
    }
}

int main(){
    vector<int> nums = {1, 2, 3, 1};
    int peak = findPeakElement(nums);
    cout << "Peak element is: " << peak << endl;
    return 0;
}