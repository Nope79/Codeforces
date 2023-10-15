#include <iostream>

// Master79
// A+B?

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	string x;
	getline(cin, x);
	
	for(int i = 0; i < n; i++){
		
		getline(cin, x);
		
		int resultado = (int) x[0] + (int) x[2];
		
		cout << resultado - 96 << endl;
	}
	
	return 0;
}