#include<iostream>
using namespace std;
int main(){
    int i,n,count=0;
    cout<<"enter the value of n = ";
    cin>>n;

    for(i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"this number is prime number  "<<endl;
    }
    else{
        cout<<"this number is not prime number  "<<endl;
    }
}
