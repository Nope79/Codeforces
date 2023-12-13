#include <iostream>

// Master79
// Print a Pedestal (Codeforces logo?)

using namespace std;

int main(){
	
	int t, n;
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		if(n % 3 == 0){
			
			cout << n/3 << " " << (n/3)+1 << " " << (n/3)-1;
			
		}else if(n % 3 == 1){
			
			cout << n/3 << " " << (n/3)+2 << " " << (n/3)-1;
			
		}else{
			
			cout << (n/3)+1 << " " << (n/3)+2 << " " << (n/3)-1;
		}
		
		cout << endl;
	}
	
	return 0;
}