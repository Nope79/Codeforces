#include <iostream>
#include <vector>

// Master79
// Vlad and Candies

using namespace std;

int main(){
	
	std::ios::sync_with_stdio(false);
	
	int t, n, x;
	cin >> t;
	
	vector <int> v;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			v.push_back(x);
		}
		
		if(n == 1 && v[0] <= 1){
			
			cout << "YES\n";
		}
		
		else if(n == 1 && v[0] > 1){
			
			cout << "NO\n";
		}
		
		else{
			
			int m = -100;
			int pos = 0;
			bool dosm = false;
			
			for(int k = 0; k < v.size(); k++){
				
				if(v[k] > m){
					
					m = v[k];
					pos = k;
				}
			}
			
			for(int k = pos + 1; k < v.size(); k++){
				
				if(v[k] == m){
					
					dosm = true;
					break;
				}
			}
			
			if(dosm == true){
			
				cout << "YES\n";
			}else{
				
				int m2 = -2;
				
				for(int k = 0; k < v.size(); k++){
					
					if(m2 < v[k] && v[k] != m){
						
						m2 = v[k];
					}
				}
				
				if(m - m2 <= 1){
					
					cout << "YES\n";
				}else{
					
					cout << "NO\n";
				}
			}
		}
		
		v.clear();
	}
	
	return 0;
}