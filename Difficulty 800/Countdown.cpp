#include <iostream>

// Master79
// Countdown

using namespace std;

int main(){
	
	int t, n;
	cin >> t;
	
	char x;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		int suma = 0;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			
			if(x != '0'){
				
				if(j != n - 1){
					
					suma += x - 47;
				}else{
					
					suma += x - 48;
				}
			}
		}
		
		cout << suma << endl;
	}
	
	return 0;
}