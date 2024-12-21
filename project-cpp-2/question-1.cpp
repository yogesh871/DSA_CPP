#include <iostream>
using namespace std;

int main(){

{
//   Question - 1 => Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using
// a do-while loop.
 

    char i = 'a';

    cout << "Output: ";

    do {
        cout << i;
        i += 4;

        if (i <= 'z') {
            cout << ", ";
        }
    } while (i <= 'z');

    cout << endl;
}

{
  //  Question - 2 => Develop a Program to count the total number of digits in a number. 

    int number;
    int count = 0;
 
     cout << " Enter Your Number:" << endl;
    cin >> number;

    while (number != 0) {
        number /= 10;
        ++count;
    }

    cout << "Number of digits: " << count << endl;
}

{
//  Question no.3 =>  Develop a Program to find the sum of a number's first and last digits.

int sum, num, firstdigit, lastdigit;

cout << "Enter a number: " << endl;
cin >> num;

lastdigit = num % 10;
while (num >= 10)
{
    num = num / 10;
}
 firstdigit = num;
 sum = firstdigit + lastdigit;
 cout << " Sum of firstdigit & lastdigit  " << sum << endl;
 
}
}



