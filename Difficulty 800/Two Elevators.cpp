#include <iostream>

// Master79
// Two Elevators

using namespace std;

int main(){
	
	int t, a, b, c;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> a >> b >> c;
		
		a--;
		
		if(b > c){
			
			b--;
		}else{
			
			b = (c - b) + c - 1;
		}
		
		(a < b) ? cout << 1 << endl : (b < a) ? cout << 2 << endl : cout << 3 << endl;
	}
	
	return 0;
}