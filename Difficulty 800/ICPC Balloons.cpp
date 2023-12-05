#include <iostream>

// Master79
// ICPC Balloons

using namespace std;

int arreglo[30];

void llenar(int n);
int contar();
void limpiar();

int main(){
	
	int t, n, x;
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		llenar(n);
		cout << contar() << endl;
		limpiar();
	}
	
	return 0;
}

void llenar(int n){
	
	char x;
	
	for(int i = 0; i < n; i++){
		
		cin >> x;
		
		arreglo[x - 65]++;
	}
}

int contar(){
	
	int sumatoria = 0;
	
	for(int i = 0; i < 30; i++){
		
		if(arreglo[i] > 0){
			
			sumatoria += arreglo[i] + 1;
		}
	}
	
	return sumatoria;
}

void limpiar(){
	
	for(int i = 0; i < 30; i++){
		
		arreglo[i] = 0;
	}
}