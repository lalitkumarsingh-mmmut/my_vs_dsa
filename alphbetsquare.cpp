#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int i = 1;
    
    /*while (i <= n) {
        int j = 1;
        while (j <= n) {
            char ch = 'A' + i - 1;//if ch= 'A'+j-1 then it will print A B C D E 
            cout << ch;
            j = j + 1;
        }
        i=i+1;
        cout << endl;
    }*///it will print A A A A A
    int count='A';
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            char ch = count;
            cout << ch;
            if (j < n) cout << " ";
            count = count + 1;
            j = j + 1;
        }
        i=i+1;
        cout << endl;
    } //to print A B C D E square box
    return 0;
}