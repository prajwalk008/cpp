#include<iostream>
using namespace std;

int main(){
    int arr[]{1,2,3,4,5};
    int *arr_ptr{arr};
    while(*arr_ptr!=5){
        cout<<++*arr_ptr<<endl;
    } // while(*arr_ptr!=5){
    //     cout<<*arr_ptr++<<endl;
    // }
}