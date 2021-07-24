#include <iostream>
using namespace std;
int partion(int a[], int l, int h)
{

    int pivot = a[l];

    int i = l, j = h;

    do
    {
        do
        {
            i++;
        } while (a[i] <= pivot);
        do
        {
            j--;
        } while (a[j] > pivot);

        if (i < j)
        {
            swap(a[i], a[j]);
        }

    } while (i < j);
    swap(a[l], a[j]);
    return j;
}

void quciksort(int a[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partion(a, l, h);
        quciksort(a, l, j);
        quciksort(a, j + 1, h);
    }
}
int main()
{
    int n = 10;
    int a[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    quciksort(a, 0, 10);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}