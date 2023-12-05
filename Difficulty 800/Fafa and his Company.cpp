#include <iostream>

// Master79
// Fafa and his Company

using namespace std;

int main(){
	
	int n;
	
	cin >> n;
	
	int contador = 0;
	
	for(int i = 1; i <= (n / 2); i++){
		
		if(n % i == 0){
			
			contador++;
		}
	}
	
	cout << contador;
	
	return 0;
}