#include <iostream>
using namespace std;

int main() {
    int num_int = 10;
    double num_double;
    
    num_double = num_int;
    cout << "Implicit cast (int to double): " << num_double << endl;
  
    num_int = (int)5.67;
    cout << "Explicit cast (double to int): " << num_int;
    return 0;
}