#include <iostream>

// Master79
// Minority

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	string s;
	getline(cin, s);
	
	// 1100 --> 1
	
	for(int i = 0; i < n; i++){
		
		getline(cin, s);
		
		int c0 = 0;
		int c1 = 0;
		
		for(int j = 0; j < s.size(); j++){
			
			if(s[j] == '1'){
				
				c1++;
			}else{
				
				c0++;
			}
		}
		
		if(c0 == c1){
			
			c0 = 0;
			c1 = 0;
			
			for(int j = 0; j < s.size() - 1; j++){
			
				if(s[j] == '1'){
				
					c1++;
				}else{
				
					c0++;
				}
			}
		}
		
		if(c0 > c1){
			
			cout << c1 << endl;
		}
		
		else if(c1 > c0){
			
			cout << c0 << endl;
			
		}else{
			
			cout << 0 << endl;
		}
	}
	
	return 0;
}