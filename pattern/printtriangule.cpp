#include <iostream>
using namespace std;

int main() {
    int n ;
    cout << "Enter the number of rows: ";
    cin >> n;
    int i = 1;

    while(i <= n) {

        // Print spaces
        int j = 1;
        while(j <= n - i) {
            cout  <<" ";
            j++;
        }

        // Print stars
        int k = 1;
        while(k <= i) {
            cout << "* ";
            k++;
        }

        cout << endl;
        i++;
    }

    return 0;
}