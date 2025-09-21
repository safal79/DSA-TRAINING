#include <iostream>
using namespace std;

bool isArmstrong(int num) {
    int sum = 0, temp = num, digit;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return sum == num;
}

int main() {
    cout << "Armstrong numbers under 1000 are:\n";

    for (int i = 1; i < 1000; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
