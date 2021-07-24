#include <iostream>
using namespace std;

int main()
{
    int a[20];
    int h[100] = {0};
    int size;
    cout << "enter sizee " << endl;
    cin >> size;

    cout << "enter array element.." << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        h[a[i]]++;
    }
    for (int i = 0; i < 20; i++)
    {
        if (h[i] > 1)
        {
            cout << "duplicate element.." << i << endl;
        }
    }

    return 0;
}