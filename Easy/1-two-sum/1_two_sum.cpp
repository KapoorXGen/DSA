#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int i = 0, j = nums.size() - 1;
    while (i < j)
    {
        if (nums[i] + nums[j] == target)
        {
            vector<int> result;
            result.push_back(i);
            result.push_back(j);
            return result;
        }
        else if (nums[i] + nums[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 22;
    vector<int> result = twoSum(nums, target);
    for (int val : result)
    {
        cout << val << " ";
    }
}
