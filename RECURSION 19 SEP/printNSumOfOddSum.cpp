#include<iostream>
using namespace std;

int odd(int n){
    if(n<=0) return 0;
    
    if(n%2!=0)
        return n+ odd(n-2);
    
    else
    return  odd(n-1);
}
int main(){
 cout<<odd(10);
}