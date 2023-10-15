#include <iostream>

// Master79
// Plus or Minus

using namespace std;

int main(){
	
	int casos;
	cin >> casos;
	
	for(int i = 0; i < casos; i++){
		
		int a, b, c;
		cin >> a >> b >> c;
		
		char x = (a + b == c) ? '+' : '-';
		
		cout << x << "\n";
	}
	
	return 0;
}