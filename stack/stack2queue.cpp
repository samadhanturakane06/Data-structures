#include <iostream>
#include <bits/stdc++.h> //use for STL
using namespace std;
class stack_queue
{
public:
    queue<int> q1, q2;

    void push(int x)
    {
        q2.push(x);
        cout << "inserted element is ..." << x << endl;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1, q2);
    }
    int pop()
    {
        int x = q1.front();
        q1.pop();
        return x;
    }

    int top()
    {
        return q1.front();
    }
};
int main()
{
    stack_queue s;

    s.push(1);
    s.push(2);
    s.push(3);
    cout << "top element is.." << s.top() << endl;
    cout << "stack element is.." << endl;
    cout << s.pop();
    cout << s.pop();
    cout << s.pop();

    return 0;
}