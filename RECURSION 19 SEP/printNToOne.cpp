#include<iostream>
using namespace std;

int fun(int n){
   if(n==1) return 1; 
   cout<<n<<endl;
   fun(n-1);
}
int main(){
cout<<fun(10);
}