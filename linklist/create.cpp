#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *head = NULL;

class linklist
{
public:
    void create(int a[], int n)
    {
        struct node *last, *nnode;
        head = new node;
        head->data = a[0];
        head->next = NULL;
        last = head;

        for (int i = 1; i < n; i++)
        {
            nnode = new node;
            nnode->data = a[i];
            nnode->next = NULL;
            last->next = nnode;
            last = nnode;
        }
    }

    void display(struct node *temp)
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
    linklist l;

    int a[10] = {10, 20, 30, 40, 50};

    cout << "hii" << endl;
    l.create(a, 5);
    l.display(head);
    return 0;
}