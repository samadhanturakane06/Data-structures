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
        front = rear = 0;
        size = 10;
        q = new int[size];
    }
    queue(int size)
    {
        front = rear = 0;
        this->size = size;
        q = new int[this->size];
    }

    void enqueue(int x)
    {
        if ((rear + 1) % size == front)
            cout << " queue is full .." << endl;
        else
        {
            rear = (rear + 1) % size;
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
            front = (front + 1) % size;
            x = q[front];
        }
        return x;
    }
    void display()
    {
        int i = front + 1;
        do
        {
            cout << "" << q[i] << endl;
            i = (i + 1) % size;
        } while (i != (rear + 1) % size);
    }
};
int main()
{
    queue q(7);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    cout << "queue element.." << endl;
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout << "remaining" << endl;
    q.display();
    q.enqueue(90);
    q.display();
    return 0;
}