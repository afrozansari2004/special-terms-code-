#include <iostream>
#include <stack>
using namespace std;
struct Term
{
    int coeff;
    int power;
};
int main()
{
    Term t;
    int n;
    cout << "ENTER NUMBER OF TERMS: " << endl;
    cin >> n;
    stack<Term> poly;
    while (n--)
    {
        cout << "Enter Coeff Power: ";
        cin >> t.coeff >> t.power;
        poly.push(t);
    }
    cout << "Coefficient | Exponent\n";
    // display
    while (!poly.empty())
    {
        t = poly.top();
        cout << t.coeff << "\t|\t" << t.power << endl;
        poly.pop();
    }
    return 0;
}