#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    if (n == 0) return 1.0;
    if (x == 0) return 0.0;
    if (x == 1) return 1.0;
    if (x == -1) return (n % 2 == 0) ? 1.0 : -1.0;

    long long N = n;
    if (N < 0){
        x = 1 / x;
        N = -N;
    }

    double ans = 1;
    while (N > 0){
        if (N % 2 == 1) {
            ans *= x;
        }

        x *= x;
        N /= 2;
    }
    return ans;
}

int main()
{
    cout << "3.14 to the power 8 is : " << myPow(3.14, 8);
    return 0;
}
