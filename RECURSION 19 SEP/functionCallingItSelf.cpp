#include<iostream>
using namespace std;
void fun(int n){
    if(n==0)
    return;
    cout<<"hello how are you"<<endl;
    cout<<"i am fine and you"<<endl;
    fun(n-1);
}

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
fun(n);
}