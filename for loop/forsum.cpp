#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i; // sum = sum + i
    }

    cout << "The sum of the first 10 natural numbers is: " << sum << endl;

    return 0;
}