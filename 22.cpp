#include <iostream>
using namespace std;

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << boolalpha << isEven(n);
    return 0;
