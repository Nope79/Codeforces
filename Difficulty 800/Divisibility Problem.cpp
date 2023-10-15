#include <iostream>

// Master79
// Divisibility Problem

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		
		int a, b;
		cin >> a >> b;
		
		if(a % b == 0){
			
			cout << 0 << endl;
		}
		else if(a > b){
			
			cout << b - (a % b) << endl;
		}else{
			
			cout << b - a << endl;
		}
	}
	
	return 0;
}