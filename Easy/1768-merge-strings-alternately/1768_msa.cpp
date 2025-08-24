#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    string result = "";
    int i = 0, j = 0;
    while (i < str1.length() || j < str2.length())
    {
        if (i != str1.length())
            result += str1[i++];
        if (j != str2.length())
            result += str2[j++];
    }

    cout << "Result: " << result;
    return 0;
}