#include<iostream>
using namespace std;
int main(){
    int i,j,n;
cout<<"enter the value of n = ";
cin>>n;
int mid = (n/2)+1;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
        if(i==mid || j==mid){
            cout<<"*";
        }
       else{
            cout<<" ";
            }
        cout<<" ";
        }
        
        cout<<endl;
        }
        return 0;
}