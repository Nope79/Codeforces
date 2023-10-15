#include <iostream>

// Master79
// Sum

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		
		int a, b, c;
		cin >> a >> b >> c;
		
		string x = (a + b == c) ? "YES" : (a + c == b) ? "YES" : (b + a == c) ? "YES": (b + c == a) ? "YES" : (c + a == b) ? "YES" : (c + b == a) ? "YES" : "NO";
		
		cout << x << endl;
	}
	
	return 0;
}