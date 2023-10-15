#include <iostream>

// Master79
// YES or YES?

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	string x;
	getline(cin, x);
	
	for(int i = 0; i < n; i++){
		
		getline(cin, x);
		
		x[0] = toupper(x[0]);
		x[2] = toupper(x[2]);
		x[1] = toupper(x[1]);
		
		if(x == "YES"){
			
			cout << "YES\n";
		}else{
			
			cout << "NO\n";
		}
	}
	
	return 0;
}