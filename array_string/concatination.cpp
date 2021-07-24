#include <iostream>
using namespace std;
int main()
{

    char a[100] = {"samadhan"};
    char b[100] = {"prashant"};
    int i, j;
    for (i = 0; a[i] != '\0'; i++)
    {
    }
    for (j = 0; b[j] != '\0'; i++, j++)
    {
        a[i] = b[j];
    }
    // a[i] = '\0';
    cout << a << endl;

    return 0;
}