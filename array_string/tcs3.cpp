#include <iostream>
using namespace std;

int main()
{

    int weights;
    cout << "input value" << endl;
    cin >> weights;

    int weight(int weights)
    {
        if (weights >= 1 && weights < 2000)
        {
            cout << "minutes" << 25;
        }
        else if (weights >= 2001 && weights < 4000)
        {
            cout << "minutes" << 35;
        }
        else if (weights >= 4000 && weights < 7000)
        {
            cout << "minutes" << 0;
        }
        else
        {
            cout << "invalid input" << endl;
        }
    }

    return 0;
}