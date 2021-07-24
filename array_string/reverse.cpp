#include <iostream>
using namespace std;
int main()
{
    char a[] = "samadhan";
    int i, j;

    for (j = 0; a[j] != '\0'; j++)
    {
    }
    j = j - 1;
    for (i = 0; i < j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    cout << a << endl;
    return 0;
}