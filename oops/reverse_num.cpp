#include<iostream>
using namespace std;

class Reverse{

    private:
    int sol{0};

    public:
    void rev(int x){
        while(x!=0){
            sol=(sol*10)+(x%10);
            x=x/10;
        }

        cout<<"Reverse = "<<sol;
    } 
};

int main(){
    Reverse t;
    t.rev(2345); 
}