#include<iostream>
using namespace std;
int main(){
    int i,n,a,d;
    int AP;
    a = 1;
    d = 2;
    cout<<"enter the value of n = ";
    cin>>n;

    for(i=1; i<=n; i++){
        AP = a+(i-1)*d;
         cout<<AP;
         cout<<", ";
    }
    
}