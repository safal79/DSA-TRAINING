#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, fib;

    cout << "Enter the value of N: ";
    cin >> n;

    if (n == 1)
        fib = a;
    else if (n == 2)
        fib = b;
    else {
        for (int i = 3; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
    }

    cout << "The " << n << "th Fibonacci term is: " << fib << endl;
    return 0;
}
