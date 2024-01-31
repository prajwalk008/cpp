#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int>vec){
    int ans{0};
    for(int i{0};i<vec.size();++i){
        ans=ans^vec[i];
    }
    return ans;
}

int main(){
    int size{0};
    cout<<"Vector ka size bol: ";
    cin>>size;

    vector<int> Numbers(size);

    cout<<"Elements bol: ";
    for(int i{0};i<size;++i){
        cin>>Numbers[i];
    }

    int ans=findUnique(Numbers);

    cout<<"Unique element is: "<<ans;

}