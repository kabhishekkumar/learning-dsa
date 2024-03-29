#include<iostream>
using namespace std;
int main(){
   int num1,num2,num3;
   int *ptr1, *ptr2, *ptr3;
cout<<"enter the value of num1= ";
cin>>num1;
cout<<"enter the value of num2= ";
cin>>num2;

ptr1 = &num1;
ptr2 = &num2;
ptr3 = &num3;

*ptr3 = (*ptr1) + (*ptr2);
cout<<"print the sum of two number = "<<*ptr3;

}
