#include <iostream>

// Master79
// Short Sort

using namespace std;

int main(){
	
	int cases;
	cin >> cases;
	
	string x;
	getline(cin, x);
	
	for(int i = 0; i < cases; i++){
		
		getline(cin, x);
		
		if(x == "bca" || x == "cab"){
			
			cout << "NO\n";
		}else{
			
			cout << "YES\n";
		}
	}
	
	return 0;
}