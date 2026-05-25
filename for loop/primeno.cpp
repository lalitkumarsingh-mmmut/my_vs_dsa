#include <iostream>
using namespace std;
int main() {
    int n, i, j, flag;

    cout << "Enter the number of prime numbers to display: ";
    cin >> n;

    cout << "Prime numbers: ";

    for (i = 2; n > 0; i++) {
        flag = 0;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            cout << i << " ";
            n--;
        }
    }

    return 0;
}