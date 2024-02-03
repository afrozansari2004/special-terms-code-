#include <iostream>
#include <stack>

using namespace std;

bool isBalanced(string str)
{
    stack<char> s;
    for (char c : str)
    {
        if (c == 'a')
        {
            s.push(c);
        }
        else if (c == 'b')
        {
            if (s.empty())
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
        else
        {
            return false;
        }
    }
    return s.empty() && str.find("abab") == string::npos;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isBalanced(str))
    {
        cout << "Valid String" << endl;
    }
    else
    {
        cout << "Invalid String" << endl;
    }

    return 0;
}