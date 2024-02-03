#include <iostream>
using namespace std;
class stack
{
public:
    int *arr;
    int top;
    int size;

    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow " << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow " << endl;
        }
    }

    int peek()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "the size of top is: ";
        return top + 1;
    }
};

int main()
{
    stack st(3);

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Stack elements :" << st.peek() << endl;

    st.pop();
    cout << "Stack elements :" << st.peek() << endl;

    return 0;
}