#include <iostream>

// Master79
// Ten Words of Wisdom

using namespace std;

int main(){
	
	int t, n, a, b;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		int max = 0;
		int k = 1;
		
		cin >> n;
		
		for(int j = 0; j < n; j++){
			
			cin >> a >> b;
			
			if(a <= 10){
				
				if(max < b){
					
					max = b;
					k = j + 1;
				}
			}
		}
		
		cout << k << endl;
	}
	
	return 0;
}