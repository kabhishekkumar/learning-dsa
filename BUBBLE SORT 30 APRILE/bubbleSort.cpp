#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[5]={4,3,8,2,1};

    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int k=0; k<5; k++){
        cout<<arr[k];
    }

}