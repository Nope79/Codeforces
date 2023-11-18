#include <iostream>

// Master79
// Array with Odd Sum

using namespace std;

int main(){
	
	int t, n, x;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		bool par = false, impar = false;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			
			if(x % 2 == 0){
				
				par = true;
			}
			
			if(x % 2 != 0){
				
				impar = true;
			}
		}
		
		if((impar == true && n % 2 != 0) || (impar == true && par == true)){
			
			cout << "YES\n";
		}else{
			
			cout << "NO\n";
		}
	}
	
	return 0;
}