#include <iostream>

// Master79
// Two Brackets

using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	string s;
	getline(cin, s);
	
	for(int i = 0; i < t; i++){
		
		getline(cin, s);
		
		int ab = 0; 
		int ce = 0;
		
		int ab2 = 0;
		int ce2 = 0;
		
		for(int j = 0; j < s.size(); j++){
			
			if(s[j] == '('){
				
				ab++;
			}
			
			else if(ce < ab && s[j] == ')'){
				
				ce++;
			}
			
			if(s[j] == '['){
				
				ab2++;
			}
			
			else if(ce2 < ab2 && s[j] == ']'){
				
				ce2++;
			}
		}
		
		cout << ce + ce2 << endl;
	}
	
	return 0;
}