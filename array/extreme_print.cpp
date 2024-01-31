#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;
    
    if(size%2==0){
        for(int i{0};i<size/2;++i){
            cout<<arr[i]<<" "<<arr[size-1-i]<<" ";
        }
    } else{
        for(int i{0};i<size/2;++i){
            cout<<arr[i]<<" "<<arr[size-1-i]<<" ";
        } cout<<arr[((size)/2)];
    }
}
