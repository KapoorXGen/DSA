#include <iostream>
#include <vector>
#
using namespace std;

bool isValid(vector<int>& arr, int n, int p, int mid) {
    int painterCount = 1;
    int currLength = 0;

    for (int i = 0; i < n; i++) {
        if (currLength + arr[i] > mid) {
            painterCount++;
            currLength = arr[i];
            if (painterCount > p) return false;
        } else {
            currLength += arr[i];
        }
    }
    return painterCount > p ? false : true;
}

int painterAllocation(vector<int>& arr, int n, int p) {
    int start = 0, end = 0;
    for (int i = 0; i < n; i++) {
        if (start < arr[i]) start = arr[i];
        end += arr[i];
    }

    int ans = -1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (isValid(arr, n, p, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {40, 30, 10, 20};
    int n = arr.size(), p = 2;
    cout << painterAllocation(arr, n, p) << endl;
    return 0;
}