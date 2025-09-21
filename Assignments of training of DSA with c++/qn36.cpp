#include <iostream>
using namespace std;

int main() {
    int a, b, hcf;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    if (hcf == 1)
        cout << a << " and " << b << " are Co-Prime numbers." << endl;
    else
        cout << a << " and " << b << " are NOT Co-Prime numbers." << endl;

    return 0;
}
