#include<iostream>
using namespace std;

int main(){
    int arr[]{2,3,5,45,32,76,34,23,28,95,2,74,100,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i{0};i<n-1;++i){
        int appender= i;
        for(int j{i+1};j<n;++j){
            if(arr[j]<arr[appender]){
                appender=j;
            }
        }
        swap(arr[i],arr[appender]);
    }

    for(int i{0};i<n;++i){
        cout<<arr[i]<<" ";
    }
}