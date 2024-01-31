#include<iostream>
#include<vector>
using namespace std;

vector<int> union_arr;

void input_arr(vector<int> &x){ //&x doing the pass by refrence!
    cout<<"Kitne elements: ";
    int n;
    cin>>n;

    for(int i{0};i<n;++i){
        cout<<": ";
        int nm;
        cin>>nm;
        x.push_back(nm);
    } 
}

void aunio(vector<int> x,vector<int> y){
    for(int i{0};i<x.size();++i){
        union_arr.push_back(x[i]);
    } for(int i{int (x.size())};i<(int(x.size())+int (y.size()));++i){
        union_arr.push_back(y[i-x.size()]);
    }

}

int main(){
    vector<int> a;
    vector<int> b;

    input_arr(a);
    input_arr(b);

    aunio(a,b);

    cout<<"Union Array:"<<endl<<"[";
    for(int i{0};i<union_arr.size();++i){
        cout<<union_arr[i]<<" ";
    } cout<<"]";
} 



