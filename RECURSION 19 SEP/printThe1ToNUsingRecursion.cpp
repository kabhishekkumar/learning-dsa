#include<iostream>
using namespace std;

int fun(int i,int n){
   
   if(i>n) return 9; 
   cout<<i<<endl;
   fun(i+1,n);
}
int main(){
cout<<fun(1,9);
}