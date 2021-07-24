#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *head = NULL, *tail = NULL;

// i have use head and tail instead of front AND rear ...you can use front and rear;
class lqueue
{
public:
    void enqueue(int x)
    {
        node *nnode;
        nnode = new node;
        nnode->data = x;
        nnode->next = NULL;

        if (head == NULL && tail == NULL)
        {
            head = tail = nnode;
        }
        else
        {
            tail->next = nnode;
            tail = nnode;
        }
    }

    void dequeue()
    {
        node *temp;
        temp = head;
        if (head == NULL && tail == NULL)
        {
            cout << "..underflow.." << endl;
        }
        else
        {
            cout << "..pop element.." << head->data << endl;
            head = head->next;
            delete temp;
        }
    }
    void display()
    {
        node *temp;
        temp = head;
        if (head == NULL && tail == NULL)
        {
            cout << "..no element.." << endl;
        }
        else
        {
            while (temp != NULL)
            {
                cout << temp->data;
                temp = temp->next;
            }
        }
    }
};
int main()
{
    lqueue d;
    d.enqueue(1);
    d.enqueue(2);
    d.enqueue(3);
    d.enqueue(4);
    d.enqueue(5);
    cout << "..queue element .." << endl;
    d.display();
    d.dequeue();

    d.enqueue(6);
    d.display();
    return 0;
}