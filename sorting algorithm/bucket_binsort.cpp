#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
class ll
{
    list<int> q1;

public:
    int findmax(int a[], int n)
    {
        int max = INT32_MIN;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
            }
        }
        return max;
    }

    void binsort(int a[], int n)
    {
        int max, i, j;
        node **bins;
        max = findmax(a, n);
        bins = new node *[max + 1];

        for (i = 0; i < max + 1; i++)
        {
            bins[i] = NULL;
        }

        for (i = 0; i < n; i++)
        {
            q1.push_back(bins[a[i]], a[i]);
        }
    }
};
int main()
{
    ll b;
    int n = 10;
    int a[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    b.binsort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}