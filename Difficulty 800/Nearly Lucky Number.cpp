#include <iostream>

// Master79
// Nearly Lucky Number

using namespace std;

int main(){
	
	string x;
	getline(cin, x);
	
	int contador = 0;
	
	for(int i = 0; i < x.size(); i++){
		
		if(x[i] == '7' || x[i] == '4'){
			
			contador++;
		}
	}
	
	if(contador == 4 || contador == 7){
		
		cout << "YES";
	}else{
		
		cout << "NO";
	}
	
	return 0;
}