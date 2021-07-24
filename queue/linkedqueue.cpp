#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *front = NULL, *rear = NULL;

class queue
{
public:
    void enqueue(int x)
    {
        node *nnode;
        nnode = new node;
        if (nnode == NULL)
        {
            cout << "queue is full.." << endl;
        }
        else
        {
            nnode->data = x;
            nnode->next = NULL;

            if (front == NULL && rear == NULL)
            {
                front = rear = nnode;
            }
            else
            {
                rear->next = nnode;
                rear = nnode;
            }
        }
    }
    void display()
    {
        node *temp;
        temp = front;

        while (temp != NULL)
        {
            cout << temp->data;
            temp = temp->next;
        }
    }

    int dequeue()
    {
        int x = -1;
        node *temp;
        temp = front;
        if (front == NULL && rear == NULL)
        {
            cout << "underflow.." << endl;
        }
        else
        {
            front = front->next;
            x = temp->data;
            delete temp;
        }
        return x;
    }
};
int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();
    cout << "display .." << endl;
    q.dequeue();
    q.display();

    return 0;
}