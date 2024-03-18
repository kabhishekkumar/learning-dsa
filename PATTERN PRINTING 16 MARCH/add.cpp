#include<iostream>
using namespace std;
int sum(int x,int y){
    return x+y;
    return x-y;
}
int sub(int c,int d){
    return c-d;
}
int main(){
    int a,b;
    cout<<"enter the value of a and b";
    cin>>a>>b;

    int result = sum(a,b);
    int abhi = sub(a,b);
    cout<<"print result ="<<result<<endl;
    cout<<"print result = "<<abhi;


}