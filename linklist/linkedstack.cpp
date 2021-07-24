#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *head = NULL;

// i have used head pointer instead of top...you can use top also.
class lstack
{
public:
    void push(int x)
    {
        struct node *nnode;
        nnode = new node;
        nnode->data = x;
        nnode->next = NULL;
        if (head == NULL)
        {
            head = nnode;
        }
        else
        {
            nnode->next = head;
            head = nnode;
        }
    }
    void pop()
    {
        node *temp;
        temp = head;
        if (head == NULL)
        {
            cout << "...underflow ..." << endl;
        }
        else
        {
            cout << head->data;
            head = head->next;
            delete temp;
        }
    }
    void display()
    {
        node *temp;
        temp = head;
        if (head == NULL)
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
    void top_element()
    {
        if (head == NULL)
        {
            cout << "..no element.." << endl;
        }
        else
        {
            cout << "top element is " << head->data;
        }
    }
};
int main()
{
    lstack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << "..stack element is.." << endl;
    s.display();

    cout << "" << endl;
    cout << "..pop " << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    return 0;
}