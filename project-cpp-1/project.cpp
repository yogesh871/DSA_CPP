#include <iostream>
using namespace std;

int main()
{


int mark;
cout << "Enter your mark " << endl;
cin >> mark;
 
if(mark <= 100 && mark > 90){
    cout << "A" << endl;
 }
 else if( mark <=90 && mark > 80){
    cout << "B" << endl;
 }
 else if( mark <=80 && mark > 60){
    cout << "C" << endl;
 }
 else if( mark <=60 && mark >= 35){
    cout << "D" << endl;
 }
 else if( mark < 35){
    cout << "F" << endl;
 }


int gread;

cout << "Enter Gread" << endl;
cin >> gread;

switch (gread)
{
case 'A':
    cout << "Excellent Work" << endl;
    break;
case 'B':
    cout << "Well Done" << endl;
    break;
case 'C':
    cout << "Good Job" << endl;
    break;
case 'D':
    cout << "You Passed" << endl;
    break;
case 'F':
    cout << "Sorry , you failed" << endl;
    break;

default:
  cout << "Invalid gread" << endl;
    break;
}


if('A' && 'B' && 'C' && 'D'){
    cout << "Congratulation ! You are eligible for the next level "<< endl ;
}
else if('F') {
    cout << "Please try again next time" << endl;

}

}