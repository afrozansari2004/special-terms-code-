
#include <iostream>
#include <stack>
using namespace std;

bool checkLang(string s);

int main()
{
    string c = "";
    cout << "Enter a string: ";
    cin >> c;
    bool result = checkLang(c);
    if (result)
        cout << "The string belongs to the grammar\n"
             << endl;
    else
        cout << "The string does not belong to the grammar\n"
             << endl;
    return 0;
}

bool checkLang(string s)
{
    stack<char> stk;
    stk.push('c');
    int i = 0;
    for (i = 0; s[i] != 'c'; ++i)
    {
        stk.push(s[i]);
    }
    for (++i; s[i] != '\0'; ++i)
    {
        if (stk.top() != s[i])
        {
            return false;
        }
        stk.pop();
    }
    return stk.top() == 'c';
}
