#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,5,47,93,88,69,104};
    int size=8;

    int max_num=INT32_MIN; //good practice to initialise max_num with INT32_MIN

    for(int i{0};i<size;++i){
        if(arr[i]>max_num){
            max_num=arr[i];
        } else{
            continue;
        }
    }
    cout<<"Maximum number is: "<< max_num;
    cout<<INT32_MIN; 
}