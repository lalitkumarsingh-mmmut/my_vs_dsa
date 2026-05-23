#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int i = 1;
    int count='A';
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            char ch = count;
            cout << ch;
            count = count + 1;
            j = j + 1;
        }
        i=i+1;
        cout << endl;
    }
    return 0;
}