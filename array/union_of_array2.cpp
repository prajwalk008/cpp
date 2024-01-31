#include<iostream>
#include<vector>
using namespace std;

vector<int> inter_array;

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
    cout<<"Array: "<<"[";
    for(int i{0};i<n;++i){
        cout<<x[i]<<' ';
    } cout<<"]"<< endl;
    
}

void uniona(vector<int> x,vector<int> y){
    for(int i{0};i<x.size();++i){
        inter_array.push_back(x[i]);
    } for(int i{0};i<y.size();++i){
        int ans=0;
        for(int j{0};j<inter_array.size();++j){
            if(y[i]==x[j]){
                
                continue;
            } else{
                ans=ans^y[i];
            }
        } 
        if(x.size()%2==0){
            if(ans==0){
                inter_array.push_back(y[i]);
            } else{
                continue;
            }
        } else{
            if(ans!=0){
                inter_array.push_back(y[i]);
            } else{
                continue;
            }
        }
    }
}

int main(){
    vector<int> a;
    vector<int> b;

    input_arr(a);
    input_arr(b);

    uniona(a,b);

    cout<<endl<<"Union array: "<<"[";
    for(int i{0};i<inter_array.size();++i){
        cout<<inter_array[i]<<" ";
    } cout<<"]"<<endl<<endl;
}