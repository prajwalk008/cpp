#include<iostream>
using namespace std;

class Employee {
private:
    string name;
    int salary;

public:
    void setName(string n) {
        name = n;
    }
    
    void setSalary(int s) {
        salary = s;
    }
    
    void displayInfo() {
        cout << "Name: " << name << ", Salary: $" << salary << endl;
    }
};

int main(){
    Employee P1;
    P1.setName("Prajwal");
    P1.setSalary(5000);
    P1.displayInfo();
}