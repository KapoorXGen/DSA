#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;
    if (x >= 0 || x < 10) return true;

    int rev = 0;
    while (x > rev) {
        rev = rev * 10 + (x % 10);
        x /= 10;
    }
    return x == rev || x == rev / 10;
}

int main() {
    isPalindrome(121) ? cout << "Palindrome" : cout << "Not a Palindrome";
    cout << endl;
    isPalindrome(-121) ? cout << "Palindrome" : cout << "Not a Palindrome";
    cout << endl;
    isPalindrome(1) ? cout << "Palindrome" : cout << "Not a Palindrome";
    cout << endl;
    isPalindrome(123) ? cout << "Palindrome" : cout << "Not a Palindrome";
    return 0;
}