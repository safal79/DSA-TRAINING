#include <iostream>
using namespace std;

int main() {
    int n = 5; // number of rows

    for(int i = 1; i <= n; i++) {
        // Print spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print numbers
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
 return 0;
}