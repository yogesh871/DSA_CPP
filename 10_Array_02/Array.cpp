#include <iostream>
using namespace std;

int main()
{
    //  Avarage of this array
    {
        int n, i;
        cout << "Enter the size of the array: ";
        cin >> n;
        int *a = new int[n];

        for (int i = 0; i < n; i++)
        {
            cout << "Enter a value for array A  [" << i << "] ";
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        int average = sum / n;
        cout << "The average is: " << average << endl;
    }

    // sum of two Array and store to another array :

    int size, i;

    cout << "Enter array size: ";
    cin >> size;
    int a[size];
    int b[size];
    int c[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a value for array A  [" << i << "] ";
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Enter a value for array B [" << i << "] ";
        cin >> b[i];
    }

    for (int i = 0; i < size; i++)
    {

        c[i] = a[i] + b[i];
    }

    cout << "Array values c: ";
    for (int i = 0; i < size; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}
