#include<iostream>
using namespace std;
int main(){
    char ch,cp,np;
cout<<"enter the value of np = ";
cin>>np;
    for(ch='a'; ch<=np; ch++){
        for(cp='a'; cp<=ch; cp++){
        cout<<cp;
        }
        cout<<endl;
        }

}