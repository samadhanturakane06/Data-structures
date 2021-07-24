#include <iostream>
using namespace std;

int main()
{
    float radius;
    float area;
    cout << "enter radius of ground " << endl;
    cin >> radius;

    if (radius >= 20 && radius <= 30)
    {
        area = 3.142 * radius * radius;
        cout << "area of ground is " << area;
        return 0;
    }
    else
        cout << "WRONG DISPLAY OUTPUT" << endl;
}