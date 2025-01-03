#include <iostream>
using namespace std;
int main()

{

    {
        // Question - 1
    cout << " Question no .01" << endl;
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
            if (0 > a[i])
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }

    {
        // Question - 2
    cout << " Question no .02" << endl;

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
      
    int largest = a[0][0]; 
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] > largest) {
                largest = a[i][j];
            }
        }
    }
    cout << "The largest element is: " << largest << endl;

    }

    {

        //  Question - 3
    cout << " Question no .03" << endl;

        int r, c;

        cout << "Enter rows size: ";
        cin >> r;

        cout << "Enter columns size: ";
        cin >> c;

        int a[r][c];

        int **array = new int *[r];
        for (int i = 0; i < r; i++)
        {
            array[i] = new int[c];
        }

        int **transpose = new int *[c];
        for (int i = 0; i < c; i++)
        {
            transpose[i] = new int[r];
        }

        cout << "Enter array's elements:\n";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << "a[" << i << "][" << j << "] = ";
                cin >> array[i][j];
            }
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                transpose[j][i] = array[i][j];
            }
        }
        cout << "The transpose matrix of the array:\n";
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < r; j++)
            {
                cout << transpose[i][j] << " ";
            }
            cout << endl;
        }
    }

    {
        //  Question  - 4
    cout << " Question no .04" << endl;
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
