#include<iostream>
using namespace std;

int sum{0};
int num{0};

int sum_n(int n){
    if(num<=n){
        sum=sum+num;
        num=num+1;
        sum_n(n);
    }
    return sum;
}

int main(){
    cout<<"n bol: ";
    int n;
    cin>>n;
    int sum_till_n=sum_n(n);
    cout<<"Sum till n= "<< sum_till_n<<endl;
}