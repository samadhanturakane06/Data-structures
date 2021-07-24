#include <iostream>
using namespace std;
void selection(int a[], int n)
{
    int i, j, k;

    for (int i = 0; i < n; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (a[j] < a[k])
            {
                k = j;
            }
        }
        int temp = a[k];
        a[k] = a[i];
        a[i] = temp;
    }
}
int main()
{
    int n = 10;
    int a[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    selection(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}