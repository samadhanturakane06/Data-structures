#include <iostream>
using namespace std;
class stack
{
public:
    int top = -1;
    int s1[20];
    int s2[20];
    int size;

    void create()
    {
        cout << "enter size1.." << endl;
        cin >> size;

        int s1[size];
        int s2[size];
    }
    void push(int s[], int x)
    {
        if (top = size - 1)
        {
            cout << "full.." << endl;
        }
        else
        {
            top++;
            s[top] = x;
        }
    }
    void enqueue(int x)
    {
        push(s1, x);
    }
    int dequeue()
    {
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
};
int main()
{
}