#include <iostream>
using namespace std;

int main()
{

//  Multiplication of number 

// int  i, num;

// cout << "Enter a Number: " << endl;
// cin >> num;

// for(i =1; i <= 10; i++){

//    cout << num << " x " << i << " = " << num*i << endl; 
// }

  

//  sum of all digit 

// int sum, num , lastdigit;

// sum = 0;

// cout << "Enter a number : ";
// cin >> num;

// while(num > 0){
//     lastdigit = num % 10;
//     sum = sum + lastdigit;
//     num = num / 10;
// }

// cout << "sum all digit: " << sum << endl;



//  sum of firstdigit & last digit

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
// return 0;
}