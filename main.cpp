#include <iostream>
#include <vector>

using namespace std;

int main() {
	
    bool flag{true};
    char inp{};
    vector<int> vec{};
    int inter_m{};
    
    do {
        cout << "\nP. Print Numbers " << endl;
        cout << "A. Add a number " << endl;
        cout << "M. Calculate of mean of numbers " << endl;
        cout << "S. Return smallest number " << endl;
        cout << "L. Return Largest number " << endl;
        cout << "Q. Quit " << endl;
        cout << "Enter your choice: ";
        cin >> inp;

        if (inp=='P' || inp=='p'){
            if (vec.size()!=0){
                cout << '[';
                for(auto i:vec){
                    cout << i << ' ';
                } cout << ']' << endl;
                
            } else {
                cout << "[]" << endl;
            }
            
        } else if (inp=='A' || inp=='a'){
            cout << "Add: ";
            cin >> inter_m;
            vec.push_back(inter_m);
            cout << inter_m << " Added." << endl;
            
        } else if (inp=='M' || inp=='m'){
            if (vec.size()==0){
                cout << "Enable to print Mean- List is emplty!" << endl;
            } else {
                double mean{};
                int total{};
                for(auto i:vec){
                    total+=i;
                } mean= (total/vec.size());
                cout << "Mean is " << mean << endl;
            }
            
        } else if (inp=='S' || inp=='s'){
            if(vec.size()!=0){
                int smallest{vec[0]};
                for(int i{-1}; i<(vec.size()-1); ++i){
                    if (vec[i+1]< smallest){
                        smallest= vec[i+1];
                        cout << smallest << endl;
                    } else
                        continue;
                } cout << "Smallest number is " << smallest << endl;
            }  else 
                cout << "Can't find smallest number as list is empty!" << endl;
            
        } else if (inp=='L' || inp=='l'){
            if(vec.size()!=0){
                int largest{vec[0]};
                for(int i{-1}; i<(vec.size()-1); ++i){
                    if (vec[i+1]> largest){
                        largest= vec[i+1];
                    } else
                        continue;
                } cout << "Largest number is " << largest << endl;
            }  else 
                cout << "Can't find largest number as list is empty!" << endl;
        
        } else if (inp=='Q' || inp=='q'){
            cout << "Good bye!" << endl;
            break;
            
        } else {
            cout << "Invalid input" << endl;
            
        } 
        
    } while(flag);
}
