#include<iostream>
using namespace std;
int main(){
    int i,n,a,d;
    int AP;
    a = 4;
    d = 3;
    cout<<"enter the value of n = ";
    cin>>n;

    for(i=1; i<=n; i++){
        AP = a+(i-1)*d;
         cout<<AP;
         cout<<", ";
    }
    
}