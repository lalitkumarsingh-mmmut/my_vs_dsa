#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int i=1;
    int count=1;
    /*while (i <=n) {
        int j = 1;
        while (j <=i) {
            cout << "* ";
            j=j+1;
        }
        i=i+1;
        cout << endl;
    }star ka half pramid*/
    /*while (i <=n) {
        int j = 1;
        while (j <=i) {
            cout << i;
            j=j+1;
        }
        i=i+1;
        cout << endl;
    }row no half pramid*/
    /*while (i <=n) {
        int j = 1;
        while (j <=i) {
            cout << count<<" ";
            count=count+1;
            j=j+1;
        }
        i=i+1;
        
        cout << endl;
    }*/
    //half pramid of numberoing
     /*while (i <=n) {
        int j = 1;
        int value =i;
        while (j <=i) {
            cout << value<< " ";
            j=j+1;
            value=value+1;
        }
        i=i+1;
        cout << endl;
    }*/
    //half pramid of numberoing
    while (i <=n) {
        int j = 1;
        
        while (j <=i) {
            cout << i-j+1<<" ";
            j=j+1;
            
        }
        i=i+1;
        cout << endl;
    }//half pramid start from row no and decrease by 1 in each column
    return 0;
}