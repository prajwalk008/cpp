#include<iostream>
using namespace std;

int start{1};

int num(int n){
    if(start<=n){
        cout<<start<<" ";
        ++start;
        num(n);
    }
    return 0;
}
    
int main(){
    cout<<"Count till?: ";
    int n;
    cin>> n;
    num(n);

    return 0;
}