#include<iostream>
using namespace std;

int multi(int a, int b){
    return a*b;
}

int main(){
int x,y;
cout<<"enter the vlaue of x,y";
cin>>x>>y;
int abhi = multi(x,y);
cout<<abhi;
}