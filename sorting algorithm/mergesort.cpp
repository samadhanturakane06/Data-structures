#include <iostream>
using namespace std;

void merging(int a[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int b[50];
    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }

    for (; i <= mid; i++)
    {
        b[k++] = a[i];
    }

    for (; j <= h; j++)
    {
        b[k++] = a[j];
    }

    for (int i = l; i <= h; i++)
    {
        a[i] = b[i];
    }
}
void mergesort(int a[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, h);
        merging(a, l, mid, h);
    }
}
int main()
{
    int n = 10;
    int a[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    mergesort(a, 0, 10);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}