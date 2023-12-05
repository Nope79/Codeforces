#include <iostream>

// Master79
// LCM Problem

using namespace std;

int main(){
	
	int t, l, r;
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> l >> r;
		
		if(l * 2 > r){
			
			cout << "-1 -1\n";
		}else{
			
			cout << l << " " << l * 2 << endl;
		}
	}
	
	return 0;
}