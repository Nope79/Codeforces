#include <iostream>

// Master79
// Review Site

using namespace std;

int main(){
	
	int t, n, x;
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		int suma = 0;
		for(int j = 0; j < n; j++){
			
			 cin >> x;
			 
			 if(x == 1 || x == 3){
			 	
			 	suma++;
			 }
		}
		
		cout << suma << endl;
	}
	
	
	return 0;
}