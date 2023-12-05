#include <iostream>

// Master79
// Three Piles of Candies

using namespace std;

int main(){
	
	long long t, x, y, z;
	cin >> t;
	
	for(long long i = 0; i < t; i++){
		
		long long suma = 0; 
		
		cin >> x >> y >> z;
		
		suma = x + y + z;
		
		cout << suma / 2 << endl;
	}
	
	return 0;
}