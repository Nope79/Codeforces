#include <iostream>

// Master79
// Technical Support

using namespace std;

int main(){
	
	int t, n;
	cin >> t;
	
	char x;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		int ans = 0;
		int qst = 0;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			
			if(x == 'A' && ans < qst){
				
				ans++;
			}
			
			else if(x == 'Q'){
				
				qst++;
			}
		}
		
		if(ans >= qst){
			
			cout << "Yes\n";
		}else{
			
			cout << "No\n";
		}
	}
	
	return 0;
}