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

{
  //  Question - 2 => Develop a Program to count the total number of digits in a number. 

int countDigits(int num);
   int num = abs(num);
    int digitCount = 0;
    do {
        num /= 10;
        digitCount++;
    } while (num > 0);

    return digitCount;

    int userInput;

    cout << "Enter any number: ";
    cin >> userInput;

    int result = countDigits(userInput);
    cout << "Total number of digits: " << result << endl;

    return 0;
}

}



