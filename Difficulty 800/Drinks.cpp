#include <iostream>

// Master79
// Drinks

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	double naranja = 0;
	
	for(int i = 0; i < n; i++){
		
		double y;
		cin >> y;
		
		naranja += y;
	}
	
	cout << naranja / n;
	
	return 0;
}