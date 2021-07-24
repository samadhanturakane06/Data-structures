#include <iostream>
using namespace std;

struct node
{
    struct node *prev;
    int data;
    struct node *next;
} *head = NULL;

class dllinklist
{
public:
    void create(int a[], int n)
    {
        node *nnode, *last;

        head = new node;
        head->prev = NULL;
        head->data = a[0];
        head->next = NULL;
        last = head;

        for (int i = 1; i < n; i++)
        {
            nnode = new node;
            nnode->data = a[i];
            nnode->next = last->next;
            nnode->prev = last;
            last->next = nnode;
            last = nnode;
        }
    }

    void insert(struct node *temp, int index, int x)
    {

        struct node *nnode;
        int i;
        if (index == 0)
        {
            nnode = new node;

            nnode->data = x;
            nnode->prev = NULL;
            nnode->next = head;
            head->prev = nnode;
            head = nnode;
        }
        else
        {

            for (i = 0; i < index - 1; i++)
            {
                temp = temp->next;
            }
            nnode = new node;
            nnode->data = x;
            nnode->prev = temp;
            nnode->next = temp->next;

            if (temp->next)
            {
                temp->next->prev = nnode;
            }
            temp->next = nnode;
        }
    }

    void display(node *temp)
    {
        while (temp != NULL)
        {
            cout << temp->data;
            temp = temp->next;
        }
    }
};
int main()
{
    dllinklist l;
    //int a[] = {1, 2, 3, 4, 5};
    //l.create(a, 5);
    //l.display(head);
    l.insert(head, 0, 1);
    l.insert(head, 1, 2);
    l.insert(head, 2, 3);
    l.display(head);
    return 0;
}