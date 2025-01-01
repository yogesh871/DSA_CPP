#include <iostream>
using namespace std;

int main()
{
    {
        //   Q.1
        cout << "Average of all element " << endl;
        int r, c;

        cout << "Enter rows size: ";
        cin >> r;

        cout << "Enter columns size: ";
        cin >> c;

        int d[r][c];

        // Input for the 2D array
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << "Enter d[" << i << "][" << j << "]: ";
                cin >> d[i][j];
            }
        }

        // Calculating the average of all elements
        int totalSum = 0, totalCount = r * c;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                totalSum += d[i][j];
            }
        }
        int average = totalSum / totalCount;
        cout << "Average of all elements: " << average << endl;
    }
    {

        cout << "Addition two array in another array" << endl;
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

        cout << endl
             << endl
             << "=============================" << endl
             << endl;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                f[i][j] = a[i][j] + b[i][j];
            }
        }

        cout << endl
             << "Array result:" << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << f[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Q - 3
    {
        cout << "print only bountry element " << endl;
        int r, c;

        cout << "Enter rows size: ";
        cin >> r;

        cout << "Enter columns size: ";
        cin >> c;

        int a[r][c];

        // Input for the 2D array
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << "Enter a[" << i << "][" << j << "]: ";
                cin >> a[i][j];
            }
        }

        // Output the required elements
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
                {
                    cout << a[i][j] << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }

    {
        //  Q - 4
        cout << "Print Only Daigram Element2 " << endl;
        int r, c;

        cout << "Enter rows size: ";
        cin >> r;

        cout << "Enter columns size: ";
        cin >> c;

        int a[r][c];

        // Input for the 2D array
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << "Enter a[" << i << "][" << j << "]: ";
                cin >> a[i][j];
            }
        }

        // Output the required elements
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    cout << a[i][j] << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }

    //  Q - 5
    cout << "print row-wise  & Column-Wise sum  " << endl;
    int r, c;

    cout << "Enter rows size: ";
    cin >> r;

    cout << "Enter columns size: ";
    cin >> c;

    int a[r][c];

    // Input for the 2D array

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout << "Enter a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    // Calculate and print row-wise sum
    cout << "Row-wise sums:" << endl;
    for (int i = 0; i < r; ++i)
    {
        int rowSum = 0;
        for (int j = 0; j < c; ++j)
        {
            rowSum += a[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    // Calculate and print column-wise sum
    cout << "Column-wise sums:" << endl;
    for (int j = 0; j < c; ++j)
    {
        int colSum = 0;
        for (int i = 0; i < r; ++i)
        {
            colSum += a[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }

    // Deallocate the memory
    // for (int i = 0; i < rows; ++i) {
    //     delete[] arr[i];
    // }
    // delete[] arr;

    return 0;
}
