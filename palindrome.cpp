#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a number to check if its palindrome or not:" << endl;
    int n, num, digit, rev = 0;
    cin >> num;
    n = num;
    while (num != 0)
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
    if (n == rev)
    {
        cout << "Number is Palindrome";
    }
    else
    {
        cout << "number is not Palindrome";
    }
    return 0;
}
