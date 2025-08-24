#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int currMax = arr[0], maxSum = arr[0];

    for(int i = 1; i < n; i++) {
        currMax = max(arr[i], currMax + arr[i]);  // Kadane's core logic
        maxSum = max(maxSum, currMax);
    }

    cout << "Maximum subarray sum is: " << maxSum << endl;

    return 0;
}
