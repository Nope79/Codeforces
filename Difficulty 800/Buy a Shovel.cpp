#include <iostream>

// Master79
// Buy a Shovel

using namespace std;

int main(){
	
	int precio, burle;
	cin >> precio >> burle;
	
	int aux = precio;
	
	int contador = 1;
	
	while(aux % 10 != 0 && aux % 10 != burle){
		
		aux += precio;
		contador++;
	}
	
	cout << contador;
	
	return 0;
}