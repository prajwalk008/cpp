#include<iostream>
using namespace std;

int main(){
    int row{0};
    int col{0};

    cout<<"Enter no. of rows and columns separated by space: ";
    cin>> row>>col;
    //cout<< row<< col<< endl;

    for(int i{1};i<=row;++i){
        if(i==1){
            for(int j{1};j<=col;++j){
                cout<< "* ";
            } cout<< endl;
        } else if(i!=1 && i!=row){
            cout<<"* ";
            for(int k{1};k<=col-2;++k){
                cout<<"  ";
            } cout << "*" <<endl;
        } else{
            for(int j{1};j<=col;++j){
                cout<< "* ";
            }
        }
    }
}