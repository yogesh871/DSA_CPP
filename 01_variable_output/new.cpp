#include <iostream>
using namespace std;

int main()
{
  // int x, y;
  // int sum;
  // cout << "Type a number: ";
  // cin >> x;
  // cout << "Type another number: ";
  // cin >> y;
  // sum = x + y;
  // cout << "Sum is: " << sum;

  int a = 20, b = 10;

  int x;
  cout << "a + b is :" << a + b << endl;
  cout << "a + b is :" << a - b << endl;
  cout << "a * b is :" << a * b << endl;
  cout << "a / b is :" << a / b << endl;

  cout << "Enter x value: ";
  cin >> x;
  cout << "x value is :" << x  <<endl;

  int myNum = 5;             // Integer (whole number)
  float myFloatNum = 5.99;   // Floating point number
  double myDoubleNum = 9.98; // Floating point number
  char myLetter = 'D';       // Character
  bool myBoolean = true;     // Boolean
  string myText = "Hello";

  cout << "int: " << myNum << "\n";
  cout << "float: " << myFloatNum << "\n";
  cout << "double: " << myDoubleNum << "\n";
  cout << "char: " << myLetter << "\n";
  cout << "bool: " << myBoolean << "\n";
  return 0;
}
