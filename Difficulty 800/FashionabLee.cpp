#include <iostream>

// Master79
// FashionabLee

using namespace std;

int main(){
	
	int t, x;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> x;
		
		(x % 4 == 0) ? cout << "YES\n" : cout << "NO\n";
	}
	
	return 0;
}