#include <iostream>

// Master79
// Following Directions

using namespace std;

int main(){
	
	int t, n;
	char a;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		int x = 0, y = 0;
		
		bool b = false;
		
		for(int i = 0; i < n; i++){
			
			cin >> a;
			
			if(a == 'U'){
				
				y++;
			}
			
			else if(a == 'D'){
				
				y--;
			}
			
			else if(a == 'R'){
				
				x++;
			}
			
			else if(a == 'L'){
				
				x--;
			}
			
			if(x == 1 && y == 1){
				
				b = true;
			}
			
		}
		
		(b == true) ? cout << "YES\n" : cout << "NO\n";
	}
	
	return 0;
}