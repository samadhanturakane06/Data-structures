#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

struct node
{
    char data;
    struct node *next;

} *top = NULL;

class linkstack
{
public:
    void push(char x)
    {
        node *nnode = new node;
        if (nnode == NULL)
            cout << "stack is full " << endl;
        else
        {
            top->data = x;
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
            cout << "underflow.." << endl;
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
    int isoperand(char x)
    {
        if (x == '+' || x == '-' || x == '*' || x == '/')
            return 0;
        else
            return 1;
    }

    int precedence(char x)
    {
        if (x == '+' || x == '-')
            return 1;
        else if (x == '*' || x == '/')
            return 2;
        else
            return 0;
    }

    char *intopost(char *infix)
    {
        int i = 0, j = 0;
        char *postfix;
        int len = strlen(infix);
        // postfix = (char *)malloc((len + 1) * sizeof(char));
        postfix = new char[len + 2];
        while (infix[i] != '\0')
        {
            if (isoperand(infix[i]))
            {
                postfix[j++] = infix[i++];
            }
            else
            {

                if (precedence(infix[i]) > precedence(top->data))
                {
                    push(infix[i++]);
                }
                else
                {

                    postfix[j++] = pop();
                }
            }
        }
        while (top != NULL)
        {
            postfix[j++] = pop();
        }
        postfix[j] = '\0';
        return postfix;
    }
};
int main()
{
    linkstack s;

    char *infix = "a+b*c-d/e";
    s.push('#');

    char *postfix = s.intopost(infix);
    cout << postfix;
    return 0;
}