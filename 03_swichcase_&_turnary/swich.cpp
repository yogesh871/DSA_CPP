#include <iostream>
using namespace std;

int main()
{
 int a, b;


cout << "Enter a value a and b : ";
cin >> a >> b;

(a > b)? cout << "a is maximum" : cout << "b is maximum" << endl;




    int chioce, type;
    cout << "enter 1 for pizza" << endl;
    cout << "enter 2 for sandwich" << endl;
    cout << "enter 3 for burger" << endl;
    cout << "enter 4 for dhosa" << endl;
    cin >> chioce;

    switch (chioce)
    {
    case 1:
        cout << "you ordered pizza";
        break;
    case 2:
        cout << "you ordered sandwich";
        break;
    case 3:
        cout << "press 1 for cheess burger" << endl;
        cout << "press 2 for veg burger" << endl;
        cout << "press 3 for small veg burger" << endl;
        cout << "press 4 for large veg burger" << endl;
        cin >> type;

        switch (type)
        {
        case 1:
            cout << "you ordered cheess burger";
            break;
        case 2:
            cout << "you ordered veg burger";
            break;
        case 3:
            cout << "you ordered small veg burger";
            break;
        case 4:
            cout << "you ordered large veg burger";
            break;

        default:
            cout << "your order is un avalible";
            break;
        }
        break;
    case 4:
        cout << "you ordered dhosa";
        break;

    default:
        cout << " Not avalable your choice ";
        break;
    }

    return 0;
}

