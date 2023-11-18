#include <iostream>

// Master79
// Magical Sticks

using namespace std;

int main(){
	
	int t, x;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> x;
		
		if(x % 2 != 0) x++;
		
		cout << x / 2 << endl;
	}
	
	return 0;
}