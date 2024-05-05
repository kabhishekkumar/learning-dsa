#include<iostream>
using namespace std;
int main(){
    int i,n;
    int sum=0;
    int a[100];
    cout<<"enter the number = ";
    cin>>n;
     
     cout<<"enter the element of array = ";
    for(i=0; i<=n; i++){
        cin>>a[i];
    }

    for(i=0; i<=n; i++){
        sum = sum+ a[i];
       
    }
     cout<<"print the sum of all element array = "<<sum;
     return 0;
}