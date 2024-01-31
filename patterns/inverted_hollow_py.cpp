#include<iostream>
using namespace std;

int main(){
    cout<<"Kitne Rows?: ";
    int rows{0};
    cin>>rows;

    for(int i{1};i<=rows;++i){
        int l{i};
        if(i==1){
            for(int columns{1};columns<=rows;++columns){
                cout<<"* ";
            } cout<<endl;
        } else if(i<rows){
            for(int k{l};k<=l;++k){
                cout<<"* ";
            } for(int spaces{rows-l-1};spaces>0;--spaces){
                cout<<"  ";
            } for(int laststar{i};laststar<=i;++laststar){
                cout<<"* ";
            } cout<<endl;
        } else{
            cout<<"*";
        }
    }
}
