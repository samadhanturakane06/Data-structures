#include <iostream>
using namespace std;
int main()
{
    char a[] = "samadhan";
    char b[100];
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
    }
    i = i - 1;
    int j;
    for (j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }
    b[j] = '\0';
    cout << b << endl;
    return 0;
}