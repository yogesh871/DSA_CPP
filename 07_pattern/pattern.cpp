#include <iostream>
using namespace std;

int main()
{
    //   pattern square of number

    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    {
        //   pattern right-half trangle of number

        int i, j;

        for (i = 1; i <= 5; i++)
        {
            for (j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
    {


     //   pattern right-half trangle of number

        int i, j;

        for (i = 5; i >= 1; i--)
        {
            for (j = 5; j >= i; j--)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
}