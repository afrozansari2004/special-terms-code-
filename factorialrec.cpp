#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int number, result;
    cout << "Enter the non negative number to find factorial" << endl;
    cin >> number;

    result = factorial(number);
    cout << number << "! is: " << result;
}