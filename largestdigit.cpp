#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n,maxdigit=0,mindigit=9;
    cin>> n;
    switch(1){
        case 1 : {
            while(n>0){
                int lastdigit = n%10;
                if(lastdigit > maxdigit){
                    maxdigit = lastdigit;
                }
                if(lastdigit < mindigit){
                    mindigit = lastdigit;
                }
                n = n/10;
            }
            cout<<"Largest digit is : "<<maxdigit<<" " <<endl;
            cout<<"Smallest digit is : "<<mindigit<<" " <<endl;
        }

    }
    
    cout<<endl;    
}