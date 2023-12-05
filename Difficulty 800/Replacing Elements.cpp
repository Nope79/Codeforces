#include <iostream>
#include <vector>

// Master79
// Replacing Elements

using namespace std;

int main(){
	
	vector <int> v;
	
	int t, n, d, x;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n >> d;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			
			v.push_back(x);
		}
		
		int aux = 0;
		
		for(int j = 0; j < v.size(); j++){
			
			for(int k = 0; k < v.size() - 1; k++){
				
				if(v[k] > v[k + 1]){
					
					aux = v[k];
					v[k] = v[k + 1];
					v[k + 1] = aux;
				}
			} 
		}
		
		int min = v[0];
		int min2 = v[1];
		int max = v[v.size() - 1];
		
		if((min + min2) <= d || max <= d){
			
			cout << "YES\n";
		}else{
			
			cout << "NO\n";
		}
		
		v.clear();
	}
	
	return 0;
}