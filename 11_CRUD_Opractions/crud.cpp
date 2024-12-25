#include <iostream>
using namespace std;

int main(){

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
int choice;
int pos, elem;

do{ 
    cout << endl << endl << " =====================" << endl << endl;
    cout << "Enter 1 for insert" << endl;
    cout << "Enter 2 for update" << endl;
    cout << "Enter 3 for delete" << endl;
    cout << "Enter 4 for view" << endl;
    cout << "Enter 0 for Exit" << endl;
    

    cout << "Enter Your Choice";
    cin >> choice;


    switch (choice)
    {
    case 1:
        cout << "Enter a position" << endl;
        cin >> pos;

        cout << "Enter a element" << endl;
        cin >> elem;

        for (int i = size - 1; i > pos; i--){
            a[i+1] = a[i];
        }
        size++;

        a[pos] = elem;
        cout << "Insert succsefully " << endl;

        break;
    case 2:
        cout << "Enter a position" << endl;
        cin >> pos;

        cout << "Enter a element" << endl;
        cin >> elem;

        a[pos] = elem;

        cout << " Update succssfully " << endl;
        break;
    case 3:


        cout << "Enter a position" << endl;
        cin >> pos;

        for (int i = pos + 1; i < size; i++){
            a[i-1] = a[i];
        }
        size--;
        cout << "Dalate succsefully " << endl;
      
        break;
    case 4:
        
    cout << "Array values: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " " ;
    }
        break;
    case 0:
        cout << "Enter valid Choice";
        break;
    default :
      cout << " ";
      break;

}
}while(choice != 0);
    return 0;

}