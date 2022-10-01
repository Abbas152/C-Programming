#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter 1st Number ";
    cin>>a;
    cout<<"Enter 2nd Number ";
    cin>>b;
    cout<<"Enter 3rd Number ";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<"Your Maximum Number is " << a;
        }
        else{
            cout<<"Your Maximum Number is " << c;
        }
    }
    else{
        if(b>c){
            cout<<"Your Maximum Number is " << b;
        }
        else{
            cout<<"Your Maximum Number is " << c;
        }
    }
}