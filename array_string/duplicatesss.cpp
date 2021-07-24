#include <iostream>
using namespace std;

int main()
{
    int a[20];

    int size;
    cout << "enter sizee " << endl;
    cin >> size;

    cout << "enter array element.." << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] != -1)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    a[j] = -1;
                }
            }
        }
        if (count > 1)
        {
            cout << "duplicate.." << a[i] << " " << count << endl;
        }
    }

    return 0;
}