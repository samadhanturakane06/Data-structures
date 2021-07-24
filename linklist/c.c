#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *head = NULL;
void create(int A[], int n)
{
    int i;
    struct Node *nnode, *last;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = NULL;
    last = head;

    for (i = 1; i < n; i++)
    {
        nnode = (struct Node *)malloc(sizeof(struct Node));
        nnode->data = A[i];
        nnode->next = NULL;
        last->next = nnode;
        last = nnode;
    }
}
void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main()
{
    struct Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);

    Display(head);

    return 0;
}