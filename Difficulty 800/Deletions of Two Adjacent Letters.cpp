#include <iostream>

// Master79
// Deletions of Two Adjacent Letters

using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	string s;
	char x;
	
	for(int i = 0; i < t; i++){
		
		cin >> s >> x;
		
		int pos = -1;
		bool b = false;
		
		for(int j = 0; j < s.size(); j++){
			
			if(j % 2 == 0 && s[j] == x){
				
				b = true;
				break;
			}
		}
		
		if(b == true){
			
			cout << "YES\n";
		}else{
			
			cout << "NO\n";
		}
	}
	
	return 0;
}