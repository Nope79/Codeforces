#include <iostream>
#include <vector>

// Master79
// Fair Division

using namespace std;

int countOnes(vector <int>& v){
	
	int x = 0;
	
	for(int i = 0; i < v.size(); i++){
		
		if(v[i] == 1){
			
			x++;
		}
	}
	
	return x;
}

int main(){
	
	int t, n, x;
	cin >> t;
	
	vector <int> v;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		int sumatoria = 0;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			sumatoria+=x;
			v.push_back(x);
		}
		
		if(sumatoria % 2 != 0){
			
			cout << "NO\n";
		}else{
			
			int unos = countOnes(v);
			int dos = v.size() - unos;
			
			if((unos > 0 && unos % 2 == 0) || dos % 2 == 0){
				
				cout << "YES\n";
			}else{
				
				cout << "NO\n";
			}
		}
		
		v.clear();
	}
	
	return 0;
}