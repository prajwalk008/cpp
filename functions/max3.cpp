#include<iostream>
using namespace std;

int max(int a,int b,int c){
    int max_num=a;
    if(b>max_num){
        max_num=b;
    } else if(c>max_num){
        max_num=c;
    }
    return max_num; 
}

int main(){
    cout<<"Enter 3 nums sep by space: ";
    int a,b,c;
    cin>>a>>b>>c;
    cout<< max(a,b,c);
}