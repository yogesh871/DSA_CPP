#include <iostream>
#include <vector>
using namespace std;

int  isLeapYear(int year) {
    return (year % 4 == 0);
}

int main() {
    int startYear, endYear;

    cout << "Enter the start year: ";
    cin >> startYear;
    cout << "Enter the end year: ";
    cin >> endYear;
    vector<int> leapYears;

    for (int year = startYear; year <= endYear; year++) {
        if (isLeapYear(year)) {
            leapYears.push_back(year);
        }
    }

    cout << "Leap years between " << startYear << " and " << endYear << " are:" << endl;
    for (int year : leapYears) {
        cout << year << " ";
    }
    cout << endl;

    return 0;
}
