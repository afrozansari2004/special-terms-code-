#include <iostream>
using namespace std;
int main()
{
    for (int num = 1; num <= 10000; num++)
    {
        // int num;
        // cout << "Enter any number to check armstrong number: " << endl;
        // cin >> num;
        int n = num;
        int sum = 0;
        while (n != 0)
        {
            int rem = n % 10;
            sum = sum + (rem * rem * rem);
            n = n / 10;
        }

        if (sum == num)
        {
            cout << num << " is an Armstrong Number." << endl;
        }
    }
    return 0;

    // else
    // {
    //     cout << num << " is not an Armstrong Number." << endl;
    // }
}
