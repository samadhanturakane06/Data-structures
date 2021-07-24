#include <iostream>
using namespace std;
class queue
{
private:
    int size;
    int front;
    int rear;
    int *q;

public:
    queue()
    {
        front = rear = -1;
        size = 10;
        q = new int[size];
    }
    queue(int size)
    {
        front = rear = -1;
        this->size = size;
        q = new int[this->size];
    }

    void enqueue(int x)
    {
        if (rear == size - 1)
            cout << " queue is full .." << endl;
        else
        {
            rear++;
            q[rear] = x;
        }
    }
    int dequeue()
    {
        int x = -1;
        if (front == rear)
            cout << " queue is empty.." << endl;
        else
        {
            x = q[front + 1];
            front++;
        }
        return x;
    }
    void display()
    {
        for (int i = front + 1; i <= rear; i++)
        {
            cout << "" << q[i] << endl;
        }
    }
};
int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "queue element.." << endl;
    q.display();
    int a = q.dequeue();
    cout << a;

    return 0;
}