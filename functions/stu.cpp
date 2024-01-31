#include<iostream>
using namespace std;

void allote_grade(int marks){
    char grade;

    if(marks>=90){
        grade='A';
    } else if(marks>=80){
        grade='B';
    } else if(marks>=70){
        grade='C';
    } else if(marks>=60){
        grade='D';
    } else if(marks<60){
        grade='E';
    }
    cout<<"Your Grade:"<< grade;
}

int main(){
    cout<<"Kitne marks aye?: ";
    int marks;
    cin>>marks;
    allote_grade(marks);
}


