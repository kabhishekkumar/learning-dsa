#include<iostream>
using namespace std;
int main(){
    char ch,cp,np;
cout<<"enter the value of np = ";
cin>>np;
    for(ch='A'; ch<=np; ch++){
        for(cp='A'; cp<=ch; cp++){
        cout<<cp;
        }
        cout<<endl;
        }

}