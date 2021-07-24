#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int size;
    cout << "enter sizee " << endl;
    cin >> size;

    cout << "enter array element.." << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int i = 0;
    int j = size - 1;
    while (a[i] < 0)
    {
        i++;
    }
    while (a[j] > 0)
    {
        j--;
    }
    if (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    for (int k = 0; k < size; k++)
    {
        cout << a[k];
    }
}