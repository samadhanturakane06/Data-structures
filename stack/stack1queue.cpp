#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class stack_queue
{
public:
    queue<int> q;

    void push(int x)
    {
        q.push(x);
        cout << "element insertd is.." << x << endl;
        for (int i = 0; i < q.size() - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    int pop()
    {
        int x = q.front();
        q.pop();
        return x;
    }
    int top()
    {
        return q.front();
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