#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    fact = n * factorial(n - 1);
    return fact;
}

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << " factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}