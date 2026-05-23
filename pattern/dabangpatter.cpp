#include <iostream>
using namespace std;
int main() {
    int n ;
    cout << "Enter the number of rows: ";
    cin >> n;
    int i = 1;

    while(i <= n) {

        // Print num triangle 1
        int j = 1;
        while(j <= n-i+1) {
            cout  << j;
            j++;
        }

        // Print stars triangle middle
        int k = 1;
        while(k <= 2*(i-1)) {
            cout << "*";
            k++;
        }

        // Print num triangle 2
        int l = 1;
        while(l <= n-i+1) {
            cout << n-l-i+2;
            l++;
        }

        cout << endl;
        i++;
    }

    return 0;
}
