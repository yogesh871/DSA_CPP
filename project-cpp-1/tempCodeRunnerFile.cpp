#include <iostream>
using namespace std;

int main() {
    //  Stap - 1 
    int mark;
    cout << "Enter your Mark out of 100: ";
    cin >> mark;

    
    char grade = (mark >= 90) ? 'A' : (mark >= 80) ? 'B' : (mark >= 70) ? 'C' : (mark >= 60) ? 'D' :(mark >= 50) ? 'E' : 'F';

    cout << "Your grade is: " << grade << endl;

    //  Stap - 2

    switch(grade) {
        case 'A':
            cout << "Excellent work!" << endl;
            break;
        case 'B':
            cout << "Well done!" << endl;
            break;
        case 'C':
            cout << "Good job!" << endl;
            break;
        case 'D':
            cout << "You passed" << endl;
            break;
        case 'F':
            cout << "Sorry, you failed." << endl;
            break;
        default:
            cout << "Invalid grade." << endl;
            break;
    }


// Stap - 3

       cout << "Your grade is: " << grade << endl;
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        cout << "Congratulations! You are eligible for the next level." << endl;
    } else if (grade == 'F') {
        cout << "Please try again next time." << endl;
    }

    return 0;
}