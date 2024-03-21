#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the number = ";
    cin>>n;

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
     for(i=1; i<=(n-1); i++){
        for(j=i; j<=(n-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
   
}