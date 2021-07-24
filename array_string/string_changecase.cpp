#include <iostream>
using namespace std;
int main()
{

    char a[] = {"SAMADHAN"};
    char b[] = {"prashant"};
    int i;
    cout << a << endl;

    //length of string
    for (i = 0; a[i] != '\0'; i++)
    {
        a[i] = a[i] + 32; //for changing to lower case
    }
    cout << a << endl;

    cout << b << endl;
    for (i = 0; b[i] != '\0'; i++)
    {
        b[i] = b[i] - 32;
    }
    cout << b << endl;
    return 0;
}