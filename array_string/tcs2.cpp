#include <iostream>
using namespace std;
int main()
{
    int size;
    int arr[50];
    int k;
    cout << "sizeof array" << endl;
    cin >> size;
    cout << "elements in array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < size - 1; j++)
    {
        for (int k = j + 1; k < size; k++)
        {
            if (arr[j] < arr[k])
            {
                cout << "leader is " << arr[k] << endl;
                break;
            }

            break;
        }
    }
    cout << "leader is " << arr[size - 1] << endl;
    return 0;
}