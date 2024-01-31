#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{1,2,3,-2,-3,5,6,-4,-3,6,5,7,8,-7,-5,-8,10};

    int start=0;

    for(int i{0};i<arr.size();++i){
        if(arr[i]<0){
            swap(arr[i],arr[start]);
            start++;
        } else{
            continue;
        }
    } 
    cout<<"Sorted Array: [";
    for(int i{0};i<arr.size();++i){
        cout<<arr[i]<<" ";
    } cout<<"]";
}