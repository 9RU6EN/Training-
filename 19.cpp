#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  
    int random_num = 1000 + rand() % 9000;  
    
    cout << "4-digit random number: " << random_num;
    return 0;
}