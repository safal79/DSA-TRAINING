#include <iostream>
using namespace std;

int main() {
    float temp, result;
    char choice;

    cout << "Enter 'C' to convert Celsius to Fahrenheit, or 'F' to convert Fahrenheit to Celsius: ";
    cin >> choice;

    if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        result = (temp * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit: " << result << "°F" << endl;
    } else if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        result = (temp - 32) * 5 / 9;
        cout << "Temperature in Celsius: " << result << "°C" << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
