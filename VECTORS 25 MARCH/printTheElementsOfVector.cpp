#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
int n;
int element;
cout<<"enter the value of n = ";
cin>>n;

for(int i=0; i<n; i++){
 
    cin>>element;
    v.push_back(element);
}

for(int i=0; i<v.size(); i++){
cout<<v[i]<<" ";
}
    cout<<endl;
}

   //or
//    vector<int> v(5);
//     int n;
//     int i;
//     cout<<"enter the value of n = ";
//     cin>>n;
    
//     for(i=0; i<n; i++){
//         cin>>v[i];
//     }

//     for(i=0; i<n; i++){
//         cout<<v[i]<<" ";
//     }