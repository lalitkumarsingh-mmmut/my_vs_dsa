#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 2; i <= n; i=i+2) {
        sum += i; // sum = sum + i
        //cout << "Current even number: " << i << ", Current sum: " << sum << endl;
    }

    cout << "The sum of upto " << n << " even numbers is: " << sum << endl;

    return 0;
}