#include<iostream>
using namespace std;

int main(){
    cout<< "Kitne Rows?: ";
    int row{0};
    cin>> row;

    for(int i{1};i<=row;++i){
        for(int j{1};j<i;++j){
            cout<<" ";
        } for(int k{0};k<=row-i;++k){
            cout<<"* ";
        } cout<<endl;
    }
}