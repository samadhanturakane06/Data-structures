#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "enter string" << endl;
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++)
    {

        str[i] = 97 - str[i] + 122;
    }
    cout << str;
    return 0;
}