#include <iostream>
using namespace std;
int main()
{

    char a[] = {"samadhan"};
    int h[26] = {0};

    int i;

    for (int i = 0; a[i] != '\0'; i++)
    {
        h[a[i] - 97]++;
    }
    for (i = 0; i < 26; i++)
    {
        if (h[i] > 1)
        {
            cout << h[i] << endl;
            cout << char(i + 97);
        }
    }
    return 0;
}