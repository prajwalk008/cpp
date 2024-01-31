#include<iostream>
using namespace std;

int brr[3][3];

void copy(int array[][3],int rows){
    for(int i{0};i<rows;++i){
        for(int j{0};j<3;++j){
            brr[i][j]=array[i][j];
        }
    }
}

int main(){
    int arr[3][3]={{2,4,6},{1,3,5},{9,11,13}};

    copy(arr,3);

    for(int i{0};i<3;++i){
        for(int j{0};j<3;++j){
            arr[i][j]=brr[j][i];
        }
    }
    cout<<"Transposed Array: "<<endl;
    for(int i{0};i<3;++i){
        for(int j{0};j<3;++j){
            cout<<arr[i][j]<<" ";
        } cout<<endl;
    }
}