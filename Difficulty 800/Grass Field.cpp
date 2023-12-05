#include <iostream>

// Master79
// Grass Field

using namespace std;

int main(){
	
	int t, a, b, c, d;
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> a >> b >> c >> d;
		
		if(a + b + c + d == 0){
			
			cout << 0 << endl;
		}
		
		else if(a + b + c + d == 4){
			
			cout << 2 << endl;
		}else{
			
			cout << 1 << endl;
		}
	}
	
	return 0;
}