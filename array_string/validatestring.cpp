#include <iostream>
using namespace std;

int main()
{

    char a[] = "sam12?321";

    int i = 0;
    while (a[i] != '\0')
    {
        if (!(a[i] >= 65 || a[i] <= 90) ||
            !(a[i] >= 97 || a[i] <= 97) ||
            !(a[i] >= 48 || a[i] <= 57))
        {
            cout << "invalid string" << endl;
        }
        else
        {
            cout << "valid string" << endl;
        }
        i++;
    }
    return 0;
}