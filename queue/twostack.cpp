#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    stack<int> s1, s2;

    void enqueue(int x)
    {
        s1.push(x);
    }
    int dequeue()
    {

        if (s2.empty())
        {
            if (s1.empty())
            {
                cout << "empty.." << endl;
            }
            else
            {
                while (!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
        }

        int x = s2.top();
        s2.pop();

        return x;
    }
};

// Driver code
int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << q.dequeue() << '\n';
    cout << q.dequeue() << '\n';
    cout << q.dequeue() << '\n';

    return 0;
}