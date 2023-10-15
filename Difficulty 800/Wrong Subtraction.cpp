#include <iostream>

// Master79
// Wrong Subtraction

using namespace std;

int main(){
	
	int numero, operaciones;
	cin >> numero >> operaciones;
	
	for(int i = 0; i < operaciones; i++){
		
		if(numero % 10 == 0){
			
			numero /= 10;
		}else{
			
			numero--;
		}
	}
	
	cout << numero; 
	
	return 0;
}