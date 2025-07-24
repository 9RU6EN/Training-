#include <iostream>
using namespace std;

int main() {
    float base, height;
    
    cout << "Enter base of triangle: ";
    cin >> base;
    
    cout << "Enter height of triangle: ";
    cin >> height;
    
    cout << "Area of triangle: " << 0.5 * base * height;
    
    return 0;
}