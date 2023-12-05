#include <iostream>
#include <math.h>

// Master79
// Equalize Prices Again

using namespace std;

int main(){
	
	int t, n, x;
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		int suma = 0;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			suma += x;
		}
		
		int r = ceil((double)suma / (double)n);
		
		cout <<  r << endl;
	}
	
	return 0;
}