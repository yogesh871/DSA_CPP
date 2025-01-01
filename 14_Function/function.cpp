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

int main()
{

    //  function Calling
    hello();
    some ("2. With Argument No Return ");
    anything();

}


    // function  definition  
    void anything () {
        cout << "3. Say anything about your self " << endl;
    }