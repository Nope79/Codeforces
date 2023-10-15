#include <iostream>

// Master79
// Vanya and Fence

using namespace std;

int main(){
	
	int personas, hValla;
	cin >> personas >> hValla;
	
	int contador = 0;
	
	for(int i = 0; i < personas; i++){
		
		int x;
		cin >> x;
		
		x > hValla ? contador += 2 : contador++;
	}
	
	cout << contador;
	
	return 0;
}