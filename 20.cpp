#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    
    float d = b*b - 4*a*c;
    float sqrt_d = sqrt(abs(d));
    
    if(d > 0) {
        cout << "Roots: " << (-b + sqrt_d)/(2*a) << " and " << (-b - sqrt_d)/(2*a);
    }
    else if(d == 0) {
        cout << "Root: " << -b/(2*a);
    }
    else {
        cout << "Roots: " << -b/(2*a) << "±" << sqrt_d/(2*a) << "i";
    }
    return 0;
}