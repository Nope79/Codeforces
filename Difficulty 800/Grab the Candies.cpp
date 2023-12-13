#include <iostream>

// Master79
// Grab the Candies

using namespace std;

int main(){

	int t, n, x;
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		int sumaImpar = 0, sumaPar = 0;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			
			if(x % 2 == 0){
				
				sumaPar+=x;
			}else{
				
				sumaImpar+=x;
			}
		}
		
		if(sumaPar > sumaImpar){
			
			cout << "YES\n";
		}else{
			
			cout << "NO\n";
		}
	}
	
	return 0;
}