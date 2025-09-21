#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;

    int temp = abs(num); // Handle negative numbers

    if (temp == 0) count = 1;
    else {
        while (temp > 0) {
            temp /= 10;
            count++;
        }
    }

    cout << "Number of digits: " << count << endl;
    return 0;
}
