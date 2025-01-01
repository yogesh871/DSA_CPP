#include <iostream>
using namespace std;

//   function Declaration 
    void anything ();

    //  -  No Argument No Return 

    void hello () {
        cout << "1. No Argument No Return " << endl;
    } 

    //  - With Argument No Return 
    void some (string word) {
            cout << word << endl;
    }

    //  - No Argument With Return 
    int add () {
           return 55;
    }

    //  - No Argument With Return 
    int addition (int a, int b) {
           return  a * b;
    }

int main()
{

    //  function Calling
    hello();
    some ("2. With Argument No Return ");
    anything();
    cout << add() << endl;
    cout << addition(3,5) << endl;


}


    // function  definition  
    void anything () {
        cout << "3. Say anything about your self " << endl;
    }