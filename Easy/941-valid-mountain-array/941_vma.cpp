#include <iostream>
#include <vector>
using namespace std;

bool validMountainArray(vector<int> &arr)
{
    int n = arr.size();
    if (n < 3) return false;

    int i = 0, j = n - 1;
    while (i + 1 < n && arr[i] < arr[i + 1]) i++;
    while (j > 0 && arr[j - 1] > arr[j]) j--;

    return i > 0 && j < n - 1 && i == j;
}

int main()
{
    vector<int> arr1 = {2, 1};
    vector<int> arr2 = {3, 5, 5};
    vector<int> arr3 = {0, 3, 2, 1};

    cout << validMountainArray(arr1) << endl; // false
    cout << validMountainArray(arr2) << endl; // false
    cout << validMountainArray(arr3) << endl; // true

    return 0;
}