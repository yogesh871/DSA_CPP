#include <iostream>
using namespace std;
int main()

{

{
    // Question - 1


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
        if(0 > a[i]){
        cout << a[i] << " ";
        }
        else{
            cout << " " << endl;
        }
    }
    cout << endl;
}




    {
    //   Question  - 2
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
                cout << "Enter d[" << i << "][" << j << "]: ";
                cin >> d[i][j];
            }
        }
    }





    {
    //  Question - 3
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

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << a[i][j] << " " << endl;
                ;
            }
        }
    }




    {
    //  Question  - 4

    int r, c;

    cout << "Enter rows size: ";
    cin >> r;

    cout << "Enter columns size: ";
    cin >> c;

    int a[r][c];

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout << "Enter a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "Row-wise addition:" << endl;
    for (int i = 0; i < r; ++i)
    {
        int rowSum = 0;
        for (int j = 0; j < c; ++j)
        {
            rowSum += a[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    cout << "Column-wise addition:" << endl;
    for (int j = 0; j < c; ++j)
    {
        int colSum = 0;
        for (int i = 0; i < r; ++i)
        {
            colSum += a[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
    }

return 0;
}
