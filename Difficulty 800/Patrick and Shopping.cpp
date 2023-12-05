#include <iostream>

// Master79
// Patrick and Shopping

using namespace std;

int main(){
	
	int a, b, c;
	
	cin >> a >> b >> c;
	
	int min = 2000000000;
	
	if((a + c + b) < min){
		
		min = a + b + c;
	}
	
	if((a + a + c + c) < min){
		
		min = a + a + c + c;
	}
	
	if((b + b + c + c) < min){
		
		min = b + b + c + c;
	}
	
	if((a + a + b + b) < min){
		
		min = a + a + b + b;
	}
	
	cout << min;
	
	return 0;
}