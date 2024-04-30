#include<iostream>
using namespace std;

int main()
{   
    int num;
    int abNum;
   cout<<"Enter the N  = ";
    cin>>num;
if(num<0){
     abNum = -(num);
  cout<<"Actual Number   = "<<num<<endl; 
   cout<<"Absolute Number = " <<abNum;
}
if(num>0){
    abNum = num;
    cout<<"Actual Number   = "<<num<<endl; 
    cout<<"this number is absolute number = "<<abNum;
}
}