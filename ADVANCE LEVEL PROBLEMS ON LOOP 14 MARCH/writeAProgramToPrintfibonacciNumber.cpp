#include<iostream>
using namespace std;
int main(){
    int i,n,a,b,fib;
    a=0;
    b=1;

    cout<<"enter the value of n =";
    cin>>n;

    for(i=0; i<=n; i++){
        cout<<"fibonaci number = ";
        fib = a+b;
        a =b;
        b =fib;
        
    }
     }
