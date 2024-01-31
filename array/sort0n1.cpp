#include<iostream>
using namespace std;

int main(){
    int arr[]={0,1,0,1,1,0,1,0,1,1,0,1,1,1,0,0,1,0};
    int size= 18;

    int start=0;
    int end=size-1;
    int i=0;

    while(i<=end){//traversal till end so when we reach end all elements after that is sorted!
        //Two pointer approach!- Putting 0s at start and 1 at ends
        if(arr[i]==0){
            swap(arr[i],arr[start]);
            start=start+1;
            i=i+1;
        } else if(arr[i]=1){
            swap(arr[i],arr[end]);
            end=end-1;
        }
    }
    cout<<"Sorted Array: [";
    for(auto i:arr){
        cout<<i<<",";       
    } cout<<"]";

}