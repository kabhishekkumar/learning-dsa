#include<iostream>
using namespace std;
int main(){
int i,r,n;
r = 4;
int multi=3;
cout<<"enter the value of n = ";
cin>>n;



for(i=1; i<=n; i++){
   
  cout<<multi;
   multi = multi*r;
        
    cout<<", ";
}
}