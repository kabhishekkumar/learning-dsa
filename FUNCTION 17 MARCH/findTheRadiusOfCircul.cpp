#include<iostream>
using namespace std;

    int area(int r){
     return 3.14*r*r;

    }
    int main(){
        int r;

        cout<<"enter the value of r = ";
        cin>>r;
        int value = area(r);
        cout<<"print the area of circule = "<<value;

}