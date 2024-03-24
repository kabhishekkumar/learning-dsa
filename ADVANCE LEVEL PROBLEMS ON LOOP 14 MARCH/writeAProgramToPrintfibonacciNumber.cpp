#include<iostream>
using namespace std;
int main(){
    int i,n,a,b,fib =0;
    a=0;
    b=1;

    cout<<"enter the value of n =";
    cin>>n;

    for(i=0; i<=n; i++){
        cout<<fib<<", ";
        a =b;
        b =fib;
        fib = a+b;
    }
     }
