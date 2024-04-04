#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(20);
    int i,n;
    int x;
    
    cout<<"enter the value of number:";
    cin>>n;
    int count= 0;

    for(i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<"enter the value ot x:";
    cin>>x;
    for(i=0; i<n; i++){
        if(v[i]==x){
            count++;
        }
       
    }
     cout<<"how many time :"<<count<<endl;
        cout<<"this the last occorence of entered item"<<i;
        return 0;
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