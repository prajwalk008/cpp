#include<iostream>
#include<vector>
using namespace std;

int SqrInt(int v){
    int start{0};
    int end=v;
    int mid= start+((end-start)/2);
    int sol{-1};

    while(start<=end){
        if(mid*mid<=v){
            sol=mid;
            start=mid+1;
        } else{
            end= mid-1;
        }
        mid=start+((end-start)/2);
    }
    return sol;
}

int main(){
    cout<<"Kiske square-root ka integer part chahiye?: ";
    int n{0};
    cin>>n;
    double ans{0};

    int sqrtInt= SqrInt(n);
    ans=double(sqrtInt);
    


    
}