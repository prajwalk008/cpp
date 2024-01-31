#include<iostream>
using namespace std;

int count0=0;
int count1=0;

void count(int array[],int size){
    for(int i{0};i<size;++i){
        if(array[i]==0){
            count0=count0+1;
        } else if(array[i]==1){
            count1=count1+1;
        }
    }
}

int main(){
    int arr[]={0,0,1,0,1,1,1,0,0,9};
    int size=9;

    count(arr,size);

    cout<<"Number of 0s= "<< count0<<endl;
    cout<<"Number of 1s= "<< count1<<endl;

    return 0;
}