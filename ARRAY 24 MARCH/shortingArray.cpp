#include<iostream>
using namespace std;
int main(){
    int i,n;
    int pre;
    int a[100];
    
    cout<<"enter value of n = ";
    cin>>n;

    cout<<"enter the element of array = ";
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    pre = a[0];
 for(i=1; i<n; i++){
       if(pre<a[i]){
      pre= a[i];
      
     }
      for(i=0; i<n; i++){
    cout<<a[i]<<endl;
  }   
  
    }
    return 0;
}