// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &nums){

    if (nums.empty()) return 0;

    int profit = 0, buy = nums[0];
    for (int i = 1; i < nums.size(); i++){
        buy = min(nums[i], buy);
        profit = max(profit, nums[i] - buy);
    }
    return profit;
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    cout << "Max profit is " << maxProfit(nums);

    return 0;
}