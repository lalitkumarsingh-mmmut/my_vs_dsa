#include<iostream>
using namespace std;
int main(){
    cout<<"Enter time in seconds : ";
    int sec,a,b,c;
    cin>> sec;
    
    switch (1){
        case 1 : {
            a = sec/3600;
            cout<<"  no of hours : -> " << a <<endl;
        
            sec=sec%3600;
            
            //cout<<n;
            b = sec/60 ;
            cout<<"  no of min : " << b <<endl;
               
            sec=sec%60;
            c = sec;
            cout<<"  no of sec : -> "<<c <<endl;
            break;
        }
    }
    cout<<"***out of loop***" <<endl;
    cout<<endl;    
}