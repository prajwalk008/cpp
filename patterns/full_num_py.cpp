#include<iostream>
using namespace std;

int main(){
    cout<< "Kitne Rows?: ";
    int row{0};
    cin>> row;
    int no_of_elements{1};
    int key{1};

    for(int row_number{1};row_number<=row;++row_number){
        for(int space{1};space<=row-row_number;++space){
            cout<< "  ";
        } for(int first_num{row_number};first_num<=key;++first_num){
            cout<<first_num<< " ";
        } key=key+2; 
        for(int reverse_num{no_of_elements};reverse_num>row_number;--reverse_num){
            cout<< reverse_num-1<<" ";
        } no_of_elements=no_of_elements+2;
        cout<< endl;
    }no_of_elements=no_of_elements+2;
}