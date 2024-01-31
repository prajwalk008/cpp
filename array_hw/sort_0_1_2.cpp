#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={1,2,1,0,1,0,2,1,0,2,2,1,0,1,0,2,2,1,0,1,1,1,0,0,2};

    int start{0};

    for(int i{0};i<arr.size();++i){
        if(arr[i]==0){
            swap(arr[i],arr[start]);
            start=start+1;
        } else{
            continue;
        }
    } for(int i{start};i<arr.size();++i){
        if(arr[i]==1){
            swap(arr[i],arr[start]);
            start=start+1;
        } else{
            continue;
        }
    } for(int i{start};i<arr.size();++i){
        if(arr[i]==2){
            swap(arr[i],arr[start]);
            start=start+1;
        } else{
            continue;
        }
    } 
    cout<<"Sorted Array: [";
    for(int i{0};i<arr.size();++i){
        cout<<arr[i]<<" ";
    } cout<<"]";
}