//  Pointer 
#include <bits/stdc++.h>
using namespace std;

// Pass-by-Value
int square1(int n)
{
    cout << "address of n1 in square1(): " << &n << endl;
    n *= n;
    return n;
}
int square2(int* n)
{
    cout << "address of n2 in square2(): " << n << endl;
    *n *= *n;
}
int square3(int& n)
{
    cout << "address of n2 in square3(): " << &n << endl;
    n *= n;
}




void number()
{
    // Call-by-Value
    int n1 = 5;
    cout << "address of n1 in main(): " << &n1 << endl;
    cout << "Square of n1: " << square1(n1) << endl;
    cout << "No change in n1: " << n1 << endl;

     int n2 = 4;
    cout << "address of n2 in main(): " << &n2 << "\n";
    square2(&n2);
    cout << "Square of n2: " << n2 << "\n";
    cout << "Change reflected in n2: " << n2 << "\n";

     int n3 = 3;
    cout << "address of n3 in main(): " << &n3 << "\n";
    square3(n3);
    cout << "Square of n3: " << n3 << "\n";
    cout << "Change reflected in n3: " << n3 << "\n";

}




//  Pointer Array  


void geeks()
{

    int val[3] = { 5, 10, 20 };

    int* ptr;

    ptr = val;
    
    cout << "Elements of the array are: ";
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2];
}

int main() {
     number(); 
    //  geeks(); 
     }