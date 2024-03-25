#include<iostream>
using namespace std;
int main(){
    int i,j,n;
cout<<"enter the value of n = ";
cin>>n;
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            if(i%2!=0 &&  j%2!=0){
                cout<<j;
            }
            
        }
        cout<<endl;
    }
}