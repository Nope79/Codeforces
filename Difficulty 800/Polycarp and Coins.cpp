#include <iostream>

// Master79
// Polycarp and Coins

using namespace std;

int main(){
	
	int t, n;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		if(n % 3 == 1){
			
			cout << (n / 3) + 1 << " " << n / 3 << endl;
		}
		
		else if(n % 3 == 2){
			
			cout << n / 3 << " " << (n / 3) + 1 << endl;
		}else{
			
			cout << n / 3 << " " << n / 3 << endl;
		}
	}
	
	return 0;
}