#include<iostream>
using namespace std;
int main()
{
    // Question no. 1
    cout << "Question no. 1" << endl;
    for(int i = 41; i <= 45; i++)
    {
        for(int j = 41; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // Question no. 2
    cout << "Question no. 2" << endl;
    int num = 11;
    for(int i = 11; i <= 14; i++)
    {
        for(int j = 11; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    // Question no. 3
    cout << "Question no. 3" << endl;
    for(int i = 5; i >= 1; i--)
    {
        for(int k = 5; k > i; k--)
        {
            cout << "  ";
        }
        for(int j = 1; j <= i; j++)
        {
            if(j % 2 == 1)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    // Q.4
   

int n =5; {
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= (n - i) * 2; space++) {
            cout << " ";
        }
        for (int j = i; j <= n; j++) {
            cout << j << " ";
        }
        for (int j = n - 1; j >= i; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    
}


    // Question no. 5
    cout << "Question no. 5" << endl;
    for(int i = 5; i >= 1; i--)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    // Question no. 6
    cout << "Question no. 6" << endl;
    for(int i = 1; i <= 5; i++)
    {
        for(int k = 5; k > i; k--)
        {
            cout << "  ";
        }
        for(int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    //Question no. 7
    cout << "Question no. 7" << endl;
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= (2 * 5 - 1); j++)
        {
            if(j == 5 - i + 1 || j == 5 + i - 1 || i == 5)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
   }
    
    
    return 0;
}