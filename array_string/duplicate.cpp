#include <iostream>
using namespace std;
int main()
{
    char a[] = {"samadhan"};
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        for (int j = i + 1; a[j] != '\0'; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                cout << a[i];
            }
        }
    }
    if (count >= 1)
    {
        cout << "   duplicate" << endl;
    }

    return 0;
}