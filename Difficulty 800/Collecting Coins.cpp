#include <iostream>

// Master79
// Collecting Coins

using namespace std;

int main(){
	
	int t, a, b, c, n;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> a >> b >> c >> n;
		
		if(a >= b && a >= c){
			
			n += - (a - b) - (a - c);
		}
		
		else if(b >= a && b >= c){
			
			n += - (b - a) - (b - c);
		}else{
			
			n += - (c - a) - (c - b);			
		}
		
		if(n < 0 || n % 3 != 0){
			
			cout << "NO\n";
		}else{
			
			cout << "YES\n";
		}
	}
	
	return 0;
}