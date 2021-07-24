#include <iostream>
using namespace std;
void insertion(int a[], int n)
{
    int x, j;

    for (int i = 1; i < n; i++)
    {
        j = i - 1;
        x = a[i];
        while (a[j] > x && j > -1)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
}
int main()
{
    int n = 10;
    int a[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    insertion(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}