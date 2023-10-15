#include <iostream>

// Master79
// George and Accommodation

using namespace std;

int main(){
	
	int habitaciones;
	cin >> habitaciones;
	
	int contador = 0;
	
	for(int i = 0; i < habitaciones; i++){
		
		int personas, cupo;
		cin >> personas >> cupo;
		
		contador += (personas + 2 <= cupo) ? 1 : 0;
	}
	
	cout << contador;
	
	return 0;
}