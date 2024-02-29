#include<iostream>
using namespace std;

int main(){
    int arr[]{2,3,5,45,32,76,34,23,28,95,2,74,100,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i{1};i<n;++i){
        int j=i-1;
        int temp= arr[i];
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            } else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i{0};i<n;++i){
        cout<<arr[i]<<" ";
    }
}