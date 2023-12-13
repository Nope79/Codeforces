#include <iostream>

// Master79
// Arithmetic Array

using namespace std;

int main(){
	
	int t, n, x;
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		int s = 0;
		
		cin >> n;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			
			s+=x;
		}
		
		if(s >= n){
			
			cout << s-n << endl;
		}else{
			
			cout << 1 << endl;
		}
	}
	
	return 0;
}