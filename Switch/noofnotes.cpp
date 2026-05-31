#include <iostream>
using namespace std;
int main(){
    cout<<"Enter amount of money u have : ";
    int n,a,b,c,d;
    cin>> n;
    
    switch (1){
        default : {
            a = n/100;
            cout<<"  Rs 100 notes -> " << a <<endl;
        
            n=n%100;
            
            //cout<<n;
            b = n/50 ;
            cout<<"  Rs 50 notes -> " << b <<endl;
               
            n=n%50;
            c = n/20;
            cout<<"  Rs 20 notes -> "<<c <<endl;
        
            n=n%20;
            d = n/1;
            cout<<"  Rs 1 notes -> "<<d <<endl;
        }
    }
    cout<<endl;    
}

