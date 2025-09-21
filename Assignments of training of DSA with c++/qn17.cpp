#include <iostream>
using namespace std;

bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int startYear, endYear;

    cout << "Enter start year: ";
    cin >> startYear;
    cout << "Enter end year: ";
    cin >> endYear;

    cout << "Leap years between " << startYear << " and " << endYear << ":\n";

    for (int year = startYear; year <= endYear; year++) {
        if (isLeap(year)) {
            cout << year << " ";
        }
    }

    cout << endl;
    return 0;
}
