#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0 || (n % 10 == 0 && n != 0)) cout << "Not a Palindrome";
    if (n < 10) cout << "Palindrome";

    int reversed = 0;
    while (n > reversed)
    {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    n == reversed || n == reversed / 10 ? cout << "Palindrome" : cout << "Not a Palindrome";
    return 0;
}