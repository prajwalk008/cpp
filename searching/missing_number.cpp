#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a{2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int start{0};
    int end= a.size()-1;
    int mid= start+((end-start)/2);
    int sol{-1};

    while(start<=end){
        if(a[mid]==mid+2){
            sol=mid+1;
            end=mid-1;
        } else if(a[mid]==mid+1){
            start=mid+1;
        }
        mid=start+((end-start)/2);
    }
    cout<<"Missing number = "<<sol;
}