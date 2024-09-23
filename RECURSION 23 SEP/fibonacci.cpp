#include<iostream>  
using namespace std;
// void fibo(int n){
// if(n==10) return;
// int fan = (n-1)+(n-2);
// cout<<fan<<endl;
// fibo(n+1);
// }

// int main(){
//     fibo(0);
// }

int fib(int n){
    if(n==1 || n==2) return 1;
    return fib(n-1)+fib(n-2);
}

int main(){
cout<<fib(10);
}