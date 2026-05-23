#include <iostream>
using namespace std;

int main() {
    int n ;
    cout << "Enter the number of rows: ";
    cin >> n;
    int i = 1;

    while(i <= n) {

        // Print spaces
        int j = 0;
        while(j <= i-1) {
            cout  << " ";
            j++;
        }

        // Print stars
        int k = 1;
        while(k <= n-i+1) {
            cout << "* ";
            k++;
        }

        cout << endl;
        i++;
    }

    return 0;
}