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
    void insert(node *temp, int pos, int x)
    {
        struct node *nnode;

        nnode = new node;
        nnode->data = x;
        nnode->next = NULL;

        if (pos == 0)
        {
            nnode->next = head;
            head = nnode;
        }
        else if (pos > 0)
        {
            temp = head;

            for (int i = 0; i < pos - 1; i++)
            {
                temp = temp->next;
            }
            if (temp)
            {

                nnode->next = temp->next;
                temp->next = nnode;
            }
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

    void insertlast(node *head, int x)
    {
        struct node *nnode, *last;

        nnode = new node;
        nnode->data = x;
        nnode->next = NULL;

        if (head == NULL)
        {
            head = last = nnode;
        }
        else
        {
            last->next = nnode;
            last = nnode;
        }
    }

    void insertinsort(node *temp, int x)
    {
        struct node *nnode, *temp1;
        nnode = new node;
        nnode->data = x;
        nnode->next = NULL;
        temp = head;
        temp1 = NULL;
        while (temp && temp->data < x)
        {
            temp1 = temp;
            temp = temp->next;
        }

        nnode->next = temp1->next;
        temp1->next = nnode;
    }

    int deletenode(node *temp, int pos)
    {
        int x = -1;
        temp = head;
        if (pos == 1)
        {
            x = temp->data;
            head = temp->next;

            delete temp;
        }
        else
        {
            node *temp1 = NULL;
            for (int i = 0; i < pos - 1 && temp; i++)
            {
                temp1 = temp;
                temp = temp->next;
            }
            if (temp)
            {
                temp1->next = temp->next;
                x = temp->data;
                delete temp;
            }
        }
        return x;
    }

    int sorted(node *temp)
    {
        int x = INT64_MIN;
        temp = head;
        while (temp != NULL)
        {
            if (temp->data < x)
            {
                return 0;
            }

            x = temp->data;
            temp = temp->next;
        }
        return true;
    }

    void removeduplicate(node *temp)
    {
        struct node *temp1;

        temp1 = temp->next;

        while (temp1 != NULL)
        {

            if (temp->data != temp1->data)
            {
                temp = temp1;
                temp1 = temp1->next;
            }
            else
            {
                temp->next = temp1->next;
                delete temp1;
                temp1 = temp->next;
            }
        }
    }

    void reverse(node *temp)
    {

        struct node *prev, *next, *curr;
        prev = NULL;
        next = NULL;
        curr = head;

        while (curr != NULL)
        {

            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void revers_array(node *temp)
    {
        int *a;
        a = new int[10];
        int i = 0;
        while (temp != NULL)
        {
            a[i] = temp->data;
            temp = temp->next;
            i++;
        }
        temp = head;
        i--;
        while (temp != NULL)
        {
            temp->data = a[i--];
            temp = temp->next;
        }
    }

    void reverse_recuu(node *temp1, node *temp)
    {
        if (temp != NULL)
        {
            reverse_recuu(temp, temp->next);
            temp->next = temp1;
        }
        else
        {
            head = temp1;
        }
    }

    int loop(node *temp)
    {
        node *p, *q;
        p = q = temp;

        do
        {
            p = p->next;
            q = q->next;
            q = q != NULL ? q->next : NULL;
        } while (p != q && p && q);

        if (p == q)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    linklist l;
    l.insert(head, 0, 1);
    l.insert(head, 1, 2);
    l.insert(head, 2, 2);
    l.insert(head, 3, 2);
    l.insert(head, 4, 4);
    l.insertlast(head, 5);
    l.insertinsort(head, 3);
    l.display(head);
    cout << " " << endl;
    //cout << "deleted element is " << l.deletenode(head, 4) << endl;
    l.removeduplicate(head);
    l.display(head);
    cout << " " << endl;
    cout << "reverse by using link " << endl;
    l.reverse(head);
    l.display(head);
    cout << "" << endl;
    cout << " reverse by using array " << endl;
    l.revers_array(head);
    l.display(head);

    cout << "" << endl;
    cout << " reversing by using recurrsion " << endl;
    l.reverse_recuu(NULL, head);
    l.display(head);

    cout << "" << endl;
    //loop for linklist
    node *t1, *t2;
    t1 = head->next->next;
    t2 = head->next->next->next->next;
    t2->next = t1;
    cout << " linklist loop " << l.loop(head);

    return 0;
}
