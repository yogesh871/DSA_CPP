#include <iostream>
using namespace std;


void cal() {


  int choice , num1, num2 ;
  char continewchoice;

  do
  {
     cout << " press 1 for Addition " << endl;
     cout << " press 2 for Subtraction " << endl;
     cout << " press 3 for Multiplication " << endl;
     cout << " press 4 for Division " << endl;
     cout << " press 5 for modulus" << endl;
     cout << " press 0 for Exit " << endl;


    cout << " Enter Your Choice ";
    cin >> choice;


     if (choice == 0)
     {
        break;
     }
    else if(choice > 0 && choice <= 5){

  
    cout << "Enter Your First Number : "; 
    cin >> num1;
    cout << "Enter Your secound Number : "; 
    cin >> num2;

        switch (choice)
        {
        case 1:
            cout << " Addition of " << num1  << " and " << num2  <<" is " << num1 + num2 << endl;
            break;
        case 2:
            cout << " Subtraction of " << num1  << " and " << num2  <<" is " << num1 - num2 << endl;
            break;
        case 3:
            cout << " Multiplication of " << num1  << " and " << num2  <<" is " << num1 * num2 << endl;
            break;
        case 4:
            cout << " Division of " << num1  << " and " << num2  <<" is " << num1 / num2 << endl;
            break;
        case 5:
            cout << " Modulus of " << num1  << " and " << num2  <<" is " << num1 % num2 << endl;
            break;
        case 0:
            break;
        default:
            cout << " Enter a valid choice" << endl;
            break;
        }

         cout << "Another operation (y/n) ";
         cin >> continewchoice;

    }
  } while (continewchoice == 'y'); 

  cout << "Program exit ! goodbye" << endl;

}

int main (){
    cal();
    return  0;
    }
