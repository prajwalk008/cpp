#include<iostream>
#include<vector>
using namespace std;

void input_arr(vector<int> &x){
    cout<<"Kitne elements: ";
    int n;
    cin>>n;

    for(int i{0};i<n;++i){
        cout<<": ";
        int n;
        cin>>n;
        x.push_back(n);
    }
}

int main(){
    vector<int> a;
    vector<int> b;
    vector<int> c;

    input_arr(a);
    input_arr(b);

    for(int i{0};i<a.size();++i){
        for(int j{0};j<b.size();++j){
            if(a[i]==b[j]){
                b[j]=-1; //created a mark so repetition is also processed.
                c.push_back(a[i]);
            } else{
                continue;
            }
        }
    }

    cout<<"Intersection Array:"<<endl<<"[";

    for(int i{0};i<c.size();++i){
        cout<<c[i]<<" ";
    } cout<<"]";
}