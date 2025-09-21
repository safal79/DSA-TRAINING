#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, fib;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        fib = a + b;
        a = b;
        b = fib;
    }

    cout << endl;
    return 0;
}
