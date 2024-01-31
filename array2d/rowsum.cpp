#include<iostream>
using namespace std;

int main(){
    int arr[5][4]={{1,2,3,4},{2,3,4,1},{5,6,1,3},{2,4,6,8},{1,9,9,6}};

    cout<<"Printing Row sum:"<<endl;
    for(int i{0};i<5;++i){
        int rowsum{0};
        for(int j{0};j<4;++j){
            rowsum=rowsum+arr[i][j];
        }
    cout<<"Sum of R"<<i+1<<" = "<<rowsum<<endl;
    }
}