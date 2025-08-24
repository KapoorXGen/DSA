#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int prefix = 1, suffix = 1;
    vector<int> ans(n, 1);
    for (int i = 0; i < n; i++)
    {
        ans[i] *= prefix;
        prefix *= nums[i];

        ans[n - 1 - i] *= suffix;
        suffix *= nums[n - 1 - i];
    }

    for (int val : ans)
    {
        cout << val << " ";
    }
    return 0;
}
