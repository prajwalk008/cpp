#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    string n;
    cout<<"Enter string: ";
    cin>>n;
    switch(n){
        case 'abc': cout<<"a was entered!";
                break;
        case 'def': cout<<"b was entered!";
                break;
        case '': cout<<"c was entered!";
                break;
        default: cout<<"Something else was entered";
    }  
}