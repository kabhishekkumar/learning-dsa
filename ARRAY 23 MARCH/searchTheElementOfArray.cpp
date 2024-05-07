#include<iostream>
using namespace std;
int main(){
    int i,n;
    int item;
    int a[100];
    cout<<"enter the item = ";
    cin>>item;
    cout<<"enter the value of number: ";
    cin>>n;

    cout<<"enter the element of array = ";
    for(i=0; i<n; i++){
        cin>>a[i];

    }
 for(i=0; i<n; i++){
       if(a[i]==item){
cout<<"item is find this index = "<<i<<endl;
       }
      

    }
    
}