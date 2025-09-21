#include <iostream>
using namespace std;

int main() {
    int n = 5; // number of rows
    for(int i = 0; i < n; i++) {
        // print spaces before stars
        for(int s = 0; s < i * 3; s++) { // 3 spaces for alignment
            cout << " ";
        }
        // print stars
        for(int j = n - i; j > 0; j--) {
            cout << "☆";
        }
        cout << endl;
    }
 return 0;
 
}