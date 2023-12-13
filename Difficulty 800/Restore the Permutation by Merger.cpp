#include <iostream>
#include <vector>

// Master79
// Restore the Permutation by Merger

using namespace std;

bool recorrer(vector <int>& v, int x){
	
	bool bandera = false;
	
	for(int i = 0; i < v.size(); i++){
		
		if(x == v[i]){
			
			bandera = true;
			false;
		}
	}
	
	return bandera;
}

int main(){
	
	int t, n, x;
	cin >> t;
	
	vector <int> v;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		n*=2;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			
			if(recorrer(v, x) == false){
				
				v.push_back(x);
			}
		}
		
		for(int j = 0; j < v.size(); j++){
			
			cout << v[j] << " ";
		}
		
		cout << endl;
		
		v.clear();
	}
	
	return 0;
}