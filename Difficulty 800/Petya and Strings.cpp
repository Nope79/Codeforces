#include <iostream>

// Master79
// Petya and Strings

using namespace std;

int main(){
	
	string x;
	
	string y;
	
	getline(cin, x);
	getline(cin, y);
	
	for(int i = 0; i < x.size(); i++){
		
		x[i] = toupper(x[i]);
	}
	
	for(int i = 0; i < y.size(); i++){
		
		y[i] = toupper(y[i]);
	}
	
	for(int i = 0; i < x.size(); i++){
		
		if(x[i] != y[i]){
			
			if(x[i] + 0 < y[i]){
				
				cout << "-1";
				break;
			}else{
				
				cout << "1";	
				break;		}
		}else{
			
			if(i == x.size() - 1){
				
				cout << "0";
			}
		}		
	}
	
	return 0;
}