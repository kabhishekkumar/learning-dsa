#include<iostream>
using namespace std;

int square(int s){
    return s*s;
}
int main(){
    int number;
    cout<<"enter the value of number = ";
    cin>>number;
    number = abs(number);
  int count = 1;
    while(number/=10){
        count++;
    }
    cout<<"print all counted digit number = "<<count<<endl;

    int result= square(count);
    cout<<"print the square of counted digit = "<<result<<endl;
   

}