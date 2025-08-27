#include <iostream>
using namespace std;

int mySqrt(int x) {
    if (x == 0 || x == 1) return x;

    int ans = 0;
    int start = 0, end = x;

    while (start <= end) {
        long long mid = start + (end - start) / 2;
        long long sq = mid * mid;

        if (sq == x)
            return mid;
        else if (sq < x) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    cout << mySqrt(16) << endl;
    cout << mySqrt(8) << endl;
    cout << mySqrt(3) << endl;
    return 0;
}