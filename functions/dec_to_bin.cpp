#include<iostream>
using namespace std;

int rem;
int bin_rev{0};
int binary(int dec){
    int quo{1};
    while(quo>0){
        rem=dec%2;
        quo=dec/2;
        bin_rev=bin_rev+rem;
        bin_rev=bin_rev*10;
        binary(quo);
    }
}

int main(){

}