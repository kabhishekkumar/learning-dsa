#include<iostream>
using namespace std;
int main(){
    int i,j,n,temp;
cout<<"enter the value of n:";
cin>>n;
 int a[n];
cout<<"enter the element of array";
for(i=0; i<n; i++)  {
    cin>>a[i];
} 

for(i=n; i>0; i--){
    for(j=0; j<(i-1); j++){
        if(a[j]>a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
}
cout<<"sorted result"<<endl;
for(i=0; i<n; ++i){
    cout<<a[i];
}

}


// second style of to solve the bubble sort

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     int arr[5]={4,3,8,2,1};

//     for(int i=0; i<5; i++){
//         for(int j=0; j<4; j++){
//             if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//             }
//         }
//     }

//     for(int k=0; k<5; k++){
//         cout<<arr[k];
//     }

// }