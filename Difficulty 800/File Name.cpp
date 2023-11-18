#include <iostream>

// Master79
// File Name

using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	int contador = 0;
	int s = 0;
	
	char x;
	
	for(int i = 0; i < t; i++){
		
		cin >> x;
		
		if(x == 'x'){
			
			s++;
			
			if(s >= 3){
				
				contador++;
			}
		}else{
			
			s = 0;
		}
	}
	
	cout << contador;
	
	return 0;
}