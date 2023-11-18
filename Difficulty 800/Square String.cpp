#include <iostream>

// Master79
// Square String?

using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	string x;
	getline(cin, x);
	
	for(int i = 0; i < t; i++){
				
		getline(cin, x);
		
		if(x.size() % 2 == 0){
			
			bool b = true;
			
			string s = "";
			
			for(int i = 0; i < x.size() / 2; i++){
				
				s += x[i];
			}
			
			int j = 0;
			
			for(int i = x.size() / 2; i < x.size(); i++){
				
				if(s[j] != x[i]){
					
					b = false;
					break;
				}
				
				j++;
			}
			
			if(b == true){
				
				cout << "YES\n";
			}else{
				
				cout << "NO\n";
			}
			
		}else{
			
			cout << "NO\n";
		}
	}
	
	return 0;
}