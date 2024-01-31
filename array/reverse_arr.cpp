#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int brr[6];

    for(int i{0};i<size;++i){
        brr[i]=arr[i];
    }

    for(int i{0};i<size;++i){
        arr[i]=brr[size-i-1];
    }
    
    for(int i{0};i<size;++i){
        cout<<arr[i]<<" ";
    }

}