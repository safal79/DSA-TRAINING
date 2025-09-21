#include <iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;

    // Input characters from the user
    cout << "Enter first character: ";
    cin >> ch1;

    cout << "Enter second character: ";
    cin >> ch2;

    cout << "Enter third character: ";
    cin >> ch3;

    // Display ASCII values
    cout << "\nCharacter\tASCII Code" << endl;
    cout << ch1 << "\t\t" << int(ch1) << endl;
    cout << ch2 << "\t\t" << int(ch2) << endl;
    cout << ch3 << "\t\t" << int(ch3) << endl;

    return 0;
}
