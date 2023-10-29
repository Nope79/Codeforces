#include <iostream>
#include <vector>

// Master79
// Design Tutorial: Learn from Math

using namespace std;

bool esPrimo(int numero);

int main(){
	
	int n;
	cin >> n;
	
	if(!esPrimo(n - 4)){
		
		cout << n - 4 << " " << 4 <<endl;
	}
	
	else if(!esPrimo(n - 6)){
		
		cout << n - 6 << " " << 6 <<endl;
	}
	
	else if(!esPrimo(n - 8)){
		
		cout << n - 8 << " " << 8 <<endl;
	}
	
	else if(!esPrimo(n - 9)){
		
		cout << n - 9 << " " << 9 <<endl;
	}
	
	else if(!esPrimo(n - 10)){
		
		cout << n - 10 << " " << 10 <<endl;
	}
	
	else if(!esPrimo(n - 12)){
		
		cout << n - 12 << " " << 12 <<endl;
	}
	
	else if(!esPrimo(n - 14)){
		
		cout << n - 14 << " " << 14 <<endl;
	}
	
	else if(!esPrimo(n - 15)){
		
		cout << n - 15 << " " << 15 <<endl;
	}
	
	return 0;
}

bool esPrimo(int numero) {
  // Casos especiales
  if(numero == 0 || numero == 1 || numero == 4) return false;
  
  for(int x = 2; x < numero / 2; x++){
  	
  	if (numero % x == 0) return false;
  }
  
  return true;
}