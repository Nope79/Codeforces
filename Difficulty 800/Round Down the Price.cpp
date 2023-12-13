#include <iostream>

// Master79
// Round Down the Price

using namespace std;

int main(){
	
	int n, x;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		
		cin >> x;
		
		if(x >= 1000000000){
			
			cout << (x % 10000000000) - 1000000000 << endl;
		}
		
		else if(x >= 100000000){
			
			cout << (x % 1000000000) - 100000000 << endl;
		}
		
		else if(x >= 10000000){
			
			cout << (x % 100000000) - 10000000 << endl;
		}
		
		else if(x >= 1000000){
			
			cout << (x % 10000000) - 1000000 << endl;
		}
		
		else if(x >= 100000){
			
			cout << (x % 1000000) - 100000 << endl;
		}
		
		else if(x >= 10000){
			
			cout << (x % 100000) - 10000 << endl;
		}
		
		else if(x >= 1000){
			
			cout << (x % 10000) - 1000 << endl;
		}
		
		else if(x >= 100){
			
			cout << (x % 1000) - 100 << endl;
		}
		
		else if(x >= 10){
			
			cout << (x % 100) - 10 << endl;
		}
		
		else if(x >= 1){
			
			cout << (x % 10) - 1 << endl;
		}
	}
	
	return 0;
}