#include <iostream>
using namespace std;

int main() {
    int num, a = 0, b = 1, fib = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (fib < num) {
        fib = a + b;
        a = b;
        b = fib;
    }

    if (num == 0 || num == 1 || fib == num)
        cout << num << " is in the Fibonacci series." << endl;
    else
        cout << num << " is NOT in the Fibonacci series." << endl;

    return 0;
}
