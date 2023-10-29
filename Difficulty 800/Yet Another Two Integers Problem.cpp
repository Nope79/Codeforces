#include <iostream>

// Master79
// Yet Another Two Integers Problem

int movMin(int a, int b);

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		
		int a, b;
		cin >> a >> b;
	
		cout << movMin(a, b) << "\n";
	}
	
	return 0;
}

int movMin(int a, int b){
	
	int dif;
	
	(a > b) ? dif = a - b : dif = b - a;
	
	int contador = 0;
	
	(dif <= 10) ? contador = 1 : (dif % 10 == 0) ? contador = dif / 10 : contador = (dif / 10) + 1;
	
	if(a == b){
		
		contador = 0;
	}
	
	return contador;
}