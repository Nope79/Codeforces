#include <iostream>
#include <vector>

// Master79
// Increasing

using namespace std;

vector <int> v;

void rearranging();

bool increasing();

int main(){
	
	int t;
	cin >> t;
	
	for(int i = 0;i < t; i++){
		
		int n;
		cin >> n;
		
		for(int j = 0; j < n; j++){
			
			int x;
			cin >> x;
			
			v.push_back(x);
		}
		
		rearranging();
		
		(increasing() == true) ? cout << "YES\n" : cout << "NO\n";
		
		v.clear();
	}
	
	return 0;
}

void rearranging(){
	
	int aux;
	
	for(int i = 0; i < v.size(); i++){
		
		for(int j = 0; j < v.size() - i - 1; j++){
			
			if(v[j] < v[j + 1]){
				
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
			}
		}
	}
}

bool increasing(){
	
	for(int i = 0; i < v.size() - 1; i++){
		
		if(v[i] == v[i + 1]){
			
			return false;
		}	
	}
	
	return true;
}