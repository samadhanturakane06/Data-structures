#include <iostream>
using namespace std;
int main()
{
    int key;
    int n;
    int i;

    cout << "enter n " << endl;
    cin >> n;
    int a[n];
    cout << "array element enter " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter key element " << endl;
    cin >> key;
    //i in point  to last index here;
    while (a[i] > key)
    {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = key;

    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}