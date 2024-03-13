#include<iostream>
using namespace std;
int main(){
int i,r,n,a;
int x,y,z;
a = 2;
int GP;
cout<<"enter the value of n = ";
cin>>n;

cout<<"enter the value of r = ";
cin>>r;

for(i=1; i<=n; i++){
   x =(i-1);
   GP = a*(r*x);
       cout<<GP;
    cout<<", ";
}
}