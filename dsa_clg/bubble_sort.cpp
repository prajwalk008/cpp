#include<iostream>
using namespace std;

int main(){
    int arr[]{2,3,5,45,32,76,34,23,28,95,2,74,100,3};
    bool flag=true;
    int n= sizeof(arr)/sizeof(arr[0]);
    int end=n-1;
    int k=0;

    while(k<end){
        for(int i{0};i<end;++i){
            int j=i+1;
            if( j<=end && arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
        end--;
    }
    for(int i{0};i<n;++i){
        cout<<arr[i]<<" ";
    }
    
    
}