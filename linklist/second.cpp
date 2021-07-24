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
    void create(int n)
    {
        struct node *nnode, *last;
        head = new node;
        cout << "enter head data" << endl;
        cin >> head->data;
        head->next = NULL;
        last = head;

        cout << "enter linklist data" << endl;

        for (int i = 1; i < n; i++)
        {
            nnode = new node;
            cin >> nnode->data;
            nnode->next = NULL;
            last->next = nnode;
            last = nnode;
        }
    }

    void display(struct node *temp)
    {
        while (temp != NULL)
        {
            cout << temp->data << " " << endl;
            temp = temp->next;
        }
    }

    void rdisplay(struct node *t)
    {
        while (t != NULL)
        {
            rdisplay(t->next);
            cout << t->data;
        }
    }
};

int main()
{
    int n;
    linklist l;
    cout << "how many node u want to create" << endl;
    cin >> n;
    l.create(n);
    cout << " " << endl;
    cout << "Display data " << endl;
    l.display(head);
    cout << "Recursivly display" << endl;
    l.rdisplay(head);
    return 0;
}