#include <iostream>
using namespace std;

int main() {
    int a = 5;  // Binary: 101
    int b = 3;  // Binary: 011

    cout << "a & b = " << (a & b) << endl;  // Output: 1 (Binary: 001)
    cout << "a | b = " << (a | b) << endl;  // Output: 7 (Binary: 111)
    cout << "a ^ b = " << (a ^ b) << endl;  // Output: 6 (Binary: 110)
    cout << "~a = " << (~a) << endl;        // Output: -6
    cout << "a << 1 = " << (a << 1) << endl; // Output: 10 (Binary: 1010)
    cout << "a >> 1 = " << (a >> 1) << endl; // Output: 2 (Binary: 010)

    return 0;
}