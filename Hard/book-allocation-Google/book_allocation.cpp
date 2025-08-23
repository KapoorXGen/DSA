#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int>& arr, int n, int m, int mxAllowedPages) { // O(n)

    // Initialize
    int studentCount = 1, pageSum = 0;

    // Iterate through all books
    for (int i = 0; i < n; i++) {
        if (arr[i] > mxAllowedPages) return false;

        if (pageSum + arr[i] <= mxAllowedPages) {
            pageSum += arr[i];
        } else {
            studentCount++;
            pageSum = arr[i];
            if (studentCount > m) return false;
        }
    }
    return studentCount > m ? false : true;
}

int allocateBooks(vector<int>& arr, int n, int m) { // O(n log m)
    // Edge cases
    if (n == 0 || m == 0) return -1;
    if (n < m) return -1;

    // Calculating the sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Answer
    int ans = -1;

    // Binary Search
    int start = 0, end = sum;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isValid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() { // O(n)
    vector<int> arr = {2, 1, 3, 4};
    int n = arr.size(), m = 2;

    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}