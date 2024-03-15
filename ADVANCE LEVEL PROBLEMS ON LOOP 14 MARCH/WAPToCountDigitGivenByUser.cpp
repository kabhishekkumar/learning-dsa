#include<iostream>
using namespace std;
int main(){
    long long number;

    cout<<"enter the number = ";
    cin>>number;
    number = abs(number);

    int count = 0;

    while( number > 0 ){
        number /=10;
        ++count;
    }
cout<<"print total count digit = "<<count<<endl;
    
}