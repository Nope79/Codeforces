#include <iostream>

// Master79
// Even Array

using namespace std;

int main(){
	
	int t, n, x;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		int contPair = 0;
		int contOdd = 0;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			
			if(j % 2 == 0){
				
				if(x % 2 != 0){
					
					contOdd++;
				}
			}else{
				
				if(x % 2 == 0){
					
					contPair++;
				}
			}
		}
		
		if(contPair != contOdd){
			
			cout << -1 << endl;
		}else{
			
			cout << contPair << endl;
		}
	}
	
	return 0;
}