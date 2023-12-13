#include <iostream>
#include <vector>

// Master79
// Sasha and Array Coloring

using namespace std;

int main(){
	
	int t, n, x;
	vector <int> v;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			
			v.push_back(x);
		}
		
		int aux;
		
		for(int k = 0; k < v.size(); k++){
			
			for(int l = 0; l < v.size()-k-1; l++){
				
				if(v[l] > v[l+1]){
					
					aux = v[l];
					v[l] = v[l+1];
					v[l+1] = aux;
				}
			}
		}
		
		int p1 = v.size()-1;
		int suma = 0;
		
		for(int k = 0; k < v.size() / 2; k++){
			
			suma+=v[p1--]-v[k];
		}
		
		cout << suma << endl;
		
		v.clear();
	}
	
	return 0;
}