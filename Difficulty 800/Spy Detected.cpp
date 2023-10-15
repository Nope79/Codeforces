#include <iostream>
#include <vector>

// Master79
// Spy Detected!

using namespace std;

void reordenar(vector<int> v){
	
	int aux = 0;
	
	for(int i = 0; i < v.size() - 2; i++){
		
		if(v[i] != v[i + 1] || v[i] != v[i + 2]){
			
			if(v[i] != v[ i + 1] && v[i] == v[i + 2]){
				
				cout << i + 2 << endl;
				break;
			}
			else if(v[i] == v[i + 1] && v[i] != v[i + 2]){
				
				cout << i + 3 << endl;
				break;
			}
			
			else if(v[i] != v[i + 1] && v[i] != v[i + 2]){
				
				cout << i + 1 << endl;
				break;
			}
		}
	}
}

int main(){
	
	int t;
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		int u;
		cin >> u;
		
		vector <int> v;
		
		for(int j = 0; j < u; j++){
			
			int x;
			cin >> x;
			
			v.push_back(x);
		}
		
		reordenar(v);
	}
	
	return 0;
}