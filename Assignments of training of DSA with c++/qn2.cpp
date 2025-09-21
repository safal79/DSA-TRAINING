#include <iostream>
#define PI 3.14159
using namespace std;

int main() {
    float radius, circumference;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    circumference = 2 * PI * radius;

    cout << "Circumference of the circle is: " << circumference << endl;

    return 0;
}
