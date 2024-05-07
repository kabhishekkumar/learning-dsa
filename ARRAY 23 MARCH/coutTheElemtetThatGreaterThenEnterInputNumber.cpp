#include<iostream>
using namespace std;
int main(){
    int i,n;
    int count=0;
    int a[100];
    int item;
    cout<<"enter the  item value = ";
    cin>>item;
    cout<<"enter the value of number = ";
    cin>>n;

    cout<<"enter the element of array = ";
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    
 for(i=1; i<n; i++){
       if(item<a[i]){
   count++;
       }
    }
    cout<<"these some value of array is grater than item ="<<count<<endl;
    return 0;
}