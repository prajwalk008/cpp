#include<iostream>
#include<string>
#include<vector>
using namespace std;

int Acc_num2{2354356};
vector<int> Customs;

class Account{
    private:
    string name;
    double Acc_bal{0};
    string Acc_type;
    int Acc_num;
    string password;

    public:
    void set_name(){
        cout<<"Name : ";
        cin>> name;
    } 
    void Add_money(){
        double temp;
        cout<<"Add : ";
        cin>> temp;
        if(temp>=0){
            Acc_bal+=temp;
        } else{
            cout<<"Invalid Input";
        }
        display_menu2();
    }
    void fetch_bal(){
        cout<<"Account Balance = "<< Acc_bal<<endl;
        display_menu2();
    }
    void withdraw_money(){
        double temp;
        cout<<"Withdraw Amount : ";
        cin>>temp;
        if(temp>=0){
            Acc_bal-=temp;
            cout<<"Money Withdrawn!"<<endl<<"Current Balance = "<<Acc_bal<<endl;
        } else{
            cout<<"Invalid Input";
        }
        display_menu2();
    }
    void login(){
        int temp;
        cout<<"A/C number: ";
        cin>> temp;

        int start=2354356;
        int end=Acc_num2;
        int mid= start+((end-start)/2);

        while(start<=end){
            if(temp==mid){
                cout<<"Login Succesful!"<<endl;
                display_menu2();
                return;
            } else if(temp<mid){
                start=mid+1;
            } else{
                end=mid-1;
            }
            mid= start+((end-start)/2);
        }
    }
    void display_menu2(){
        int rep2;
        cout<<"1. Add Money"<<endl<<"2. Withdraw Money"<<endl<<"3. Fetch Balance"<<endl<<"4. Log Out!";
        cin>>rep2;
        if(rep2==1){
            Add_money();
        } else if(rep2==2){
            withdraw_money();
        } else if(rep2==3){
            fetch_bal();
        } else if(rep2==4){
            cout<<"Logged Out!";
            display_menu1();
        } else{
            cout<<"Invalid input!";
            display_menu2();
        }
    }
    void display_menu1(){
        int inp1;
        cout<<"1. Log in"<<endl<<"2. Create Account"<<endl;
        cin>> inp1;
        if(inp1==1){
            login();
            return;
        } else if(inp1=2){
            create_account();
            return;
        } else{
            cout<<"Invalid Input!";
            display_menu1();
        }
    }
    void create_account(){
        string rep1;
        set_name();
        Acc_num=Acc_num2;
        cout<<"Your A/C number is : "<<Acc_num<<endl;
        Acc_num2+=93;
        Customs.push_back(Acc_num);
        cout<<"Would you add money? : ";
        cin>> rep1;
        if(rep1=="y" || rep1=="Y" || rep1=="Yes" || rep1=="yes" || rep1=="YES"){
            Add_money();
        } else{
            cout<<"OK Fine!, Account Created Succesfully!";
        }
        display_menu2();
    }
};

int main(){
    Account Prajwal;
    Prajwal.display_menu1();
}