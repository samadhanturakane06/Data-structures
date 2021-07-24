#include <iostream>
using namespace std;

struct node
{
    char data;
    struct node *next;
} *top = NULL;

class stack
{
public:
    void push(char x)
    {
        node *nnode;
        nnode = new node;

        if (nnode == NULL)
        {
            cout << "stack is full " << endl;
        }
        else
        {
            nnode->data = x;
            nnode->next = top;
            top = nnode;
        }
    }

    char pop()
    {
        char x = -1;
        node *temp;
        temp = top;
        if (top == NULL)
        {
            cout << "stack is full " << endl;
        }
        else
        {
            top = top->next;
            x = temp->data;
            delete temp;
        }
        return x;
    }

    void display()
    {
        node *temp;
        temp = top;
        while (temp != NULL)
        {
            cout << temp->data;
            temp = temp->next;
        }
    }

    int isBallence(char *exp)
    {
        int i = 0;
        for (i = 0; exp[i] != '\0'; i++)
        {
            if (exp[i] == '(')
            {
                push(exp[i]);
            }
            else if (exp[i] == ')')
            {
                if (top == NULL) //check satack is already null
                {
                    return 0;
                }
                pop();
            }
        }
        if (top == NULL)
            return 1;
        else
            return 0;
    }
};

int main()
{
    stack s;
    char *exp = "((a+b)*(c+d)))";
    cout << s.isBallence(exp);
    return 0;
}