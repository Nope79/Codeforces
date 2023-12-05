#include <iostream>

// Master79
// GamingForces

using namespace std;

int main(){
	
	int t, n, x;
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		int ones = 0;
		cin >> n;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			
			if(x == 1){
				
				ones++;
			}
		}
		
		if(ones % 2 == 0){
			
			cout << n - ones + (ones / 2) << endl;
		}else{
			
			cout << n - ones + 1 + (ones / 2) << endl;
		}
	}
	
	return 0;
}