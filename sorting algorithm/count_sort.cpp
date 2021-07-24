#include <iostream>
using namespace std;
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

void countsort(int a[], int n)
{
    int i, j, max;
    int *c;
    max = findmax(a, n);
    c = new int[max];

    for (i = 0; i < max + 1; i++)
    {
        c[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        c[a[i]]++;
    }

    i = 0, j = 0;
    while (i < max + 1)
    {
        if (c[i] > 0)
        {
            a[j++] = i;
            c[i]--;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
    int n = 10;
    int a[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    countsort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}