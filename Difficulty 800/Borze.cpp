#include <iostream>

// Master79
// Borze

using namespace std;

void leerBorze(string s){
	
	for(int i = 0; i < s.size(); i){
		
		if(s[i] == '.'){
			
			cout << 0;
			i++;
		}else{
			
			if(s[i+1] == '.'){
				
				cout << 1;
			}else{
				
				cout << 2;
			}
			
			i+=2;
		}
	}
}

int main(){
	
	string s;
	getline(cin, s);
	
	leerBorze(s);
	
	return 0;
}