#include <iostream>
using namespace std;
int main()
{
    char a1[] = {'a', 'b', 'c', '\0'};
    char a[] = {"samaDHAN"};
    int i;
    //length of string
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            a[i] = a[i] + 32;
        }
        else if (a[i] >= 97 && a[i] <= 122)
        {
            a[i] = a[i] - 32;
        }
    }

    cout << a << endl;

    return 0;
}