#include <iostream>
using namespace std;
int main()
{
    int i;
    char a[] = "how are    you";

    //length of string
    int spaces = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ' && a[i - 1] != ' ')
        {
            spaces++;
        }
    }
    cout << "number of word in this is  " << spaces + 1 << endl;

    return 0;
}