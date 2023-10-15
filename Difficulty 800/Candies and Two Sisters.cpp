#include <iostream>

// Master79
// Candies and Two Sisters

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		
		int x;
		cin >> x;
		cout << (x - 1) / 2 << endl;
	}	
	
	return 0;
}