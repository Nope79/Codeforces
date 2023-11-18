#include <iostream>

// Master79
// Array Coloring

using namespace std;

int main(){
	
	int t, n, x;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		int cont = 0;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			
			cont += x;
		}
		
		(cont % 2 == 0) ? cout << "YES\n" : cout << "NO\n";
	}
	
	return 0;
}