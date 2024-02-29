#include<iostream>
using namespace std;

int main(){
    int n{10};
    int m{29};
    int k{33};

    int *int_ptr1{nullptr};
    int_ptr1=&n;
    int *int_ptr2{&m};

    cout<<int_ptr2-int_ptr1<<endl;
    cout<<int_ptr2<<endl<<int_ptr1<<endl<<&k<<endl;

}