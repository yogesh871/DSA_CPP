#include <iostream>
using namespace std;

int main()
{
    // Two Dimensional Array:
    int r, c;

    cout << "Enter rows size: ";
    cin >> r;

    cout << "Enter columns size: ";
    cin >> c;

    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << endl
         << "================" << endl
         << endl;
         
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
