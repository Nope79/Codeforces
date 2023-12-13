#include <iostream>

// Master79
// Special Permutation

using namespace std;

int main(){
	
	int t, n;
	cin >> t;
	
	for(int z = 0; z < t; z++){
		
		cin >> n;
		
		if(n % 2 == 0){
			
			for(int i = n; i > 0; i--){
				
				cout << n-- << " ";
			}
		}else{
			
			int f = n, in = 0;
			
			for(int i = 0; i < n; i++){
				
				if(i == 0){
					
					cout << f << " ";
				}else{
					
					cout << ++in << " ";
				}
			} 
		}
		
		cout << endl;
	}
	
	return 0;
}