#include <iostream>
using namespace std;
class stack
{
public:
    int *ptr;
    int top = -1;
    int size;
    int x = -1;
    stack(int sz)
    {
        size = sz;
        ptr = new int[size];
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if (top == size - 1)
            return true;
        else
            return false;
    }
    void push(int a)
    {

        if (!isFull())
        {

            top++;
            ptr[top] = a;
        }
        else
            cout << "..overflow.." << endl;
    }
    int pop()
    {
        if (!isEmpty())
        {
            x = ptr[top];
            cout << x;
            top--;
        }
        else
        {
            cout << "..underflow.." << endl;
        }
        return x;
    }

    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << ptr[i];
        }
    }
};

int main()
{

    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << "stack element " << endl;
    s.display();
    cout << "" << endl;
    cout << "pop element " << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout << "" << endl;
    cout << "remaining element " << endl;
    s.display();

    return 0;
}