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
    int count(node *temp)
    {
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    int rcount(node *temp)
    {
        int count = 0;
        if (temp == NULL)
            return 0;
        else
        {
            return rcount(temp->next) + 1;
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
    int sum(node *temp)
    {
        int sum = 0;
        while (temp != NULL)
        {
            sum += temp->data;
            temp = temp->next;
        }
        return sum;
    }

    int rsum(node *temp)
    {

        if (temp == NULL)
            return 0;
        else
            return rsum(temp->next) + temp->data;
    }

    //max element
    int max(node *temp)
    {
        int min = INT64_MIN;

        while (temp != NULL)
        {
            if (temp->data > min)
            {
                min = temp->data;
            }
            temp = temp->next;
        }
        return min;
    }
    /* int rmax(node *temp)
    {
        int x = 0;
        if (temp == NULL)
            return INT64_MIN;
        else
        {
            x = rmax(temp->next);
            if (x > temp->data)
            {
                return x;
            }
            else
                return temp->data;
        }
    }
   */
    node *search(node *temp, int key)
    {
        while (temp != NULL)
        {
            if (temp->data == key)
                return temp;
            else
                temp = temp->next;
        }
        return 0;
    }

    node *rsearch(node *temp, int key)
    {
        if (temp == NULL)
            return 0;
        if (temp->data == key)
        {
            return temp;
        }
        else
            return rsearch(temp->next, key);
    }
};

int main()
{
    linklist l;

    int a[] = {1, 2, 3, 4, 5};
    l.create(a, 5);
    l.display(head);
    cout << " " << endl;
    cout << " number of node in linklist is " << l.count(head) << endl;

    cout << " number of node in linklist is " << l.rcount(head) << endl;

    cout << "sum of all element in linklist usin iteration is " << l.sum(head) << endl;

    cout << "sum of all element in linklist is using recursion  " << l.rsum(head) << endl;

    cout << "max element in linklist is " << l.max(head) << endl;

    cout << "searching element in linklist address " << l.search(head, 5) << endl;

    cout << "search by recursion " << l.rsearch(head, 5) << endl;

    return 0;
}