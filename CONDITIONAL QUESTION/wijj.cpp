#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter the n ";
    cin>>n;

    for(i =2; i<n; i++){
        if(i%2==0){
            cout<<"print the compsdit number = "<<i<<endl;
        }
    }
}