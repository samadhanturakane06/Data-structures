#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} * head;

class circul
{
    /*private:
    node *head;

public:
    circul()
    {
        head = NULL;
    }
*/
public:
    void create(int a[], int n)
    {
        node *nnode, *last;
        head = new node;
        head->data = a[0];
        head->next = head;
        last = head;

        for (int i = 1; i < n; i++)
        {
            nnode = new node;
            nnode->data = a[i];
            nnode->next = last->next;
            last->next = nnode;
            last = nnode;
        }
    }
    void display(node *temp)
    {

        do
        {
            cout << temp->data;
            temp = temp->next;
        } while (temp != head);
    }

    void insert(int pos, int x)
    {
        node *nnode;
        nnode = new node;
        nnode->data = x;
        if (pos == 0)
        {

            if (head == NULL)
            {
                head = nnode;
                head->next = head;
            }
            else
            {
                node *temp = head;
                while (temp->next != head)
                {
                    temp = temp->next;
                }

                temp->next = nnode;
                nnode->next = head;
                head = nnode;
            }
        }
        else
        {
            node *temp = head;
            for (int i = 0; i < pos - 1; i++)
            {
                temp = temp->next;
            }
            nnode->next = temp->next;
            temp->next = nnode;
        }
    }

    void deletee(int pos)
    {
        node *temp, *temp1;
        if (pos == 1)
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            if (temp = head)
            {
                delete head;
                head = NULL;
            }
            else
            {
                temp->next = head->next;
                delete head;
                head = temp->next;
            }
        }
        else
        {
            temp = head;
            for (int i = 1; i < pos - 2; i++)
            {
                temp = temp->next;
            }
            temp1 = temp->next;
            temp->next = temp1->next;
            delete temp1;
        }
    }
};

int main()
{
    circul c;
    // int a[] = {1, 2, 3, 4, 5};
    //c.create(a, 5);
    c.insert(0, 1);
    c.insert(1, 2);
    c.insert(2, 3);
    c.insert(3, 4);
    cout << "linked list is " << endl;
    c.display(head);
    cout << " " << endl;
    c.deletee(2);
    cout << "deletion on linked list " << endl;
    c.display(head);
    return 0;
}