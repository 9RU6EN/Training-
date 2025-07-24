#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Area: " << M_PI * pow(radius, 2);
    return 0;
}