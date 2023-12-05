#include <iostream>

// Master79
// Casimir's String Solitaire

using namespace std;

int main(){
	
	int n;
	string s;
	
	cin >> n;
	
	getline(cin, s);
	
	for(int z = 0; z < n; z++){
		
		getline(cin, s);
		
		int a = 0;
		int b = 0;
		int c = 0;
		
		for(int k = 0; k < s.size(); k++){
			
			if(s[k] == 'A'){
				
				a++;
			}
			
			else if(s[k] == 'C'){
				
				c++;
			}else{
				
				b++;
			}
		}
		
		((a + c) == b) ? cout << "YES\n" : cout << "NO\n";
	}
	
	return 0;
}