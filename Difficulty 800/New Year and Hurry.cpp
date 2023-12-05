#include <iostream>

// Master79
// New Year and Hurry

using  namespace std;

int main(){
	
	int problemas, minutosUsados;
	
	cin >> problemas >> minutosUsados;
	
	int solve = 0;
	
	int k = 5;
	
	while(minutosUsados + k <= 240 && problemas > 0){
		
		problemas--;
		
		minutosUsados += k;
		
		k += 5;
		
		solve++;
	}
	
	cout << solve;
	
	return 0;
}