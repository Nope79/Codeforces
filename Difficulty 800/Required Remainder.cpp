#include <iostream>

// Master79
// Required Remainder

using namespace std;

int main(){
	
	int t, x, y, n;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> x >> y >> n;
		
		if(n % x == y){
			
			cout << n << endl;
		}
		
		else if((n % x) > y){
			
			cout << n - ((n % x) - y) << endl;
			
		}else{
			
			cout << n - ((n % x) + (x - y)) << endl;
		}
	}
	
	return 0;
}