#include<iostream>
#include<vector>
using namespace std;

int findFirstOcc(vector<int> x, int target){
    int start{0};
    int end= x.size()-1;
    int mid= start+((end-start)/2);
    int sol{-1};

    while(start<=end){
        if(x[mid]==target){
        sol=mid;
        end=mid-1;
        } else if(x[mid]<target){
            start=mid+1;
        } else{
            end=mid-1;
        }
        mid= start+((end-start)/2);
    }

    return sol;
    
}

int findLastOcc(vector<int> x, int target){
    int start{0};
    int end= x.size()-1;
    int mid= start+((end-start)/2);
    int sol{-1};

    while(start<=end){
        if(x[mid]==target){
        sol=mid;
        start=mid+1;
        } else if(x[mid]<target){
            start=mid+1;
        } else{
            end=mid-1;
        }
        mid= start+((end-start)/2);
    }

    return sol;
}

int main(){
    vector<int> a{2,3,4,5,6,6,6,6,6,6,6,6,6,6,6,8,9,11,34,45,65};

    int firstOcc= findFirstOcc(a,6);
    int lastOcc= findLastOcc(a,6);

    cout<<"First occurance of 6: "<<firstOcc<<endl;
    cout<<"Last occurance of 6: "<<lastOcc<<endl;
}