#include<iostream>
using namespace std;
int main(){
    int a,b,n,i,fib=0;
    a=0;
    b=1;
    cout<<"enter the number = ";
    cin>>n;

    for(i= 0; i<=n; i++){
        cout<<fib<<", ";
        fib = a+b;
        a =b;
        b = fib;
        
    }
}