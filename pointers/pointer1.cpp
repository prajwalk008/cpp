#include<iostream>
using namespace std;

int main(){
    int arr[]{1,2,3,4,5};

    int *arr_ptr{nullptr};
    arr_ptr=arr;

    cout<< arr[1]<<endl; //gives arr[1]
    cout<< arr_ptr[1]<<endl; // gives arr[1]
    cout<<*(arr+1)<<endl; //gives value at arr[1]
    cout<<(arr_ptr+1)<<endl; // gives address of arr_ptr(i.e, arr[0])+4 bytes
    cout<<(arr_ptr+2)<<endl; //gives address of arr_ptr(i.e, arr[0])+4 bytes
}
