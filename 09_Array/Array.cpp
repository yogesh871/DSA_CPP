#include <iostream>
using namespace std;

int main()
{
    // One Dimensional Array:

    int size;

    cout << "Enter array size: ";
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a value for the array: ";
        cin >> a[i];
    }
    cout << "Array values: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

      