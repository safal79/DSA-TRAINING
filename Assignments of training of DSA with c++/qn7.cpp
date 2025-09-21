#include <iostream>
using namespace std;

int main() {
    int asciiCode;

    cout << "Enter an ASCII code (0 - 255): ";
    cin >> asciiCode;

    if(asciiCode >= 0 && asciiCode <= 255) {
        cout << "Character for ASCII code " << asciiCode << " is: " << char(asciiCode) << endl;
    } else {
        cout << "Invalid ASCII code!" << endl;
    }

    return 0;
}
