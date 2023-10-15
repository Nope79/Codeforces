#include <iostream>

// Master79
// Elephant

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int contador = 0;
	
	while(n > 0){
		
		if(n >= 5){
			
			contador += n / 5;
				n = n % 5;
		}
		
		else if(n >= 4){
			
			contador += n / 4;
			
			n = n % 4;
		}
		
		else if(n >= 3){
			
			contador += n / 3;
			
			n = n % 3;
		}
		
		else if(n >= 2){
			
			contador += n / 2;
			
			n = n % 2;
		}
		
		else if(n == 1){
			
			n = 0;
			contador++;
		}
	}
	
	cout << contador;
	
	return 0;
}