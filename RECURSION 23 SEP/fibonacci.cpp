#include<iostream>  
using namespace std;
void fibo(int n){
if(n==10) return;
int fan = (n-1)+(n-2);
cout<<fan<<endl;
fibo(n+1);
}

int main(){
    fibo(0);
}

