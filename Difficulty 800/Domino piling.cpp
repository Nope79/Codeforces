#include <iostream>

// Master79
// Domino piling

using namespace std;

int calcularCupo(int n);

int main(){
	
	int n, m;
	cin >> n >> m;
	
	int x = n * m;
	
	cout << calcularCupo(x);
	
	return 0;
}

int calcularCupo(int n){
	
	return (n / 2);
}