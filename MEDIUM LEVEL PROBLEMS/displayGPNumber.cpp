#include<iostream>
using namespace std;
int main(){
int i,r,n;

int multi=1;
cout<<"enter the value of n = ";
cin>>n;

cout<<"enter the value of r = ";
cin>>r;

for(i=1; i<=n; i++){
  cout<<multi;
        multi = multi*r;
    cout<<", ";
}
}