#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int X{2000};
	if(X<2000 ||X>2009){
        cout<<"K"<<X%100;
	} else{
	    cout<<"K0"<<X%100+0;
	}
}
