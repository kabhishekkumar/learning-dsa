#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(20);
    int i,n;
    int x;
    cout<<"enter the value ot x:";
    cin>>x;
    cout<<"enter the value of n:";
    cin>>n;
    int count= 0;

    for(i=0; i<n; i++){
        cin>>v[i];
    }
    for(i=0; i<n; i++){
        if(v[i]==x){
            count++;
        }
       
    }
     
        cout<<"this the last occorence of entered item"<<i;
}


          //or

    //       the help of extra logic we easily solve this problem
    //    int count=0;
    //       for(int i=n; i<=0; i--){
    //      if(v[i]==x){
    //         count++;
    //         break;
    //      }
    //      cout<<i<<endl;
    //       }