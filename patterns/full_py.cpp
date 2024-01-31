#include<iostream>
using namespace std;

int main(){
    cout<< "Kitne Rows?: ";
    int row{0};
    cin>>row;

    for(int i{1};i<=row;++i){
        for(int j{row-1};j>=i;--j){
            cout<<" ";
        } for(int k{1};k<=i;++k){
            cout<<"* ";
        } cout<<endl;
    }
}