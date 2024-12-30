#include <iostream>
using namespace std;

int main()
{
//   Q.1 
 
{

    int r, c;

    cout << "Enter rows size: ";
    cin >> r;

    cout << "Enter columns size: ";
    cin >> c;

    int d[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter a[" << i << "][" << j << "]: ";
            cin >> d[i][j];
        }
    }

   int length = sizeof(d) / sizeof(d[0][0]);
    for (int i = 0; i < r; i++)
    {
        int sum = 0; 
        for (int j = 0; j < c; j++)
        {
            sum += d[i][j];
        }
        int  average = sum / length; 
        cout << "Average of row : " << average << endl;
}
    }


    //  Q.2 
    int r, c;

    cout << "Enter rows size: ";
    cin >> r;

    cout << "Enter columns size: ";
    cin >> c;

    int a[r][c], b[r][c], f[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter b[" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }


    cout << endl << endl << "=============================" << endl << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            f[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << endl << "Array result:" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << f[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

