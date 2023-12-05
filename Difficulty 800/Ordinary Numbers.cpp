#include <iostream>
#include <string>

// Master79
// Ordinary Numbers

using namespace std;

int main(){
	
	int t;
	cin >> t;
	string n;
	
	getline(cin, n);
	
	for(int z = 0; z < t; z++){
		
		getline(cin, n);
		
		int con = (n.size() - 1) * 9;
		
		char x = n[0];
		x -= 48;
		
		for(int i = 0; i < n.size()-1; i++){
			
			if(n[i] > n[i+1]){
				
				x--;
				break;
			}
			
			else if(n[i] < n[i+1]){
				
				break;
			}
		}
		
		cout << con + x << endl;
	}
	
	return 0;
}