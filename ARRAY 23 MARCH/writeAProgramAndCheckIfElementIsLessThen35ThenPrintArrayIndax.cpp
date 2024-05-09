#include<iostream>
using namespace std;
int main(){
    int i,n;
    int a[100];
    cout<<"enter the number of n = ";
    cin>>n;
    cout<<"enter the element of array = ";
    for(i=0; i<=n; i++){
        cin>>a[i];
  
    }
  for(i=0; i<=n; i++){
     if(a[i]<35){
            cout<<"print the index of that element = "<<i<<endl;
        }
        else{
            cout<<"print the element of array = "<<a[i]<<endl;
        }
}
}