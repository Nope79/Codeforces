#include <iostream>

// Master79
// Codeforces Checking

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	char x;
	
	for(int i = 0; i < n; i++){
		
		cin >> x;
		
		if(x == 'c' || x == 'o' || x == 'd' || x == 'e' || x == 'f' || x == 'r' || x == 's'){
			
			cout << "YES\n" ;
		}else{
			
			cout << "NO\n";
		}
	}
	
	return 0;
}