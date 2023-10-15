#include <iostream>

// Master79
// In Search of an Easy Problem

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	bool v = true;
	
	for(int i = 0; i < n; i++){
		
		int x;
		cin >> x;
		
		if(x == 1){
			
			v = false;
		}
	}
	
	if(v == true){
		
		cout << "EASY";
		return 0;
	}
	
	cout << "HARD";
	
	return 0;
}