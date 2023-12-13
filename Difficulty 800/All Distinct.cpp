#include <iostream>
#include <vector>

// Master79
// All Distinct

using namespace std;

int main(){
	
	int t, n, x;
	vector <int> v;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		int recurrencias = 0;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			
			bool existe = false;
			
			for(int k = 0; k < v.size(); k++){
				
				if(v[k] == x){
					
					existe = true;
					break;
				}
			}
			
			if(existe == true){
				
				recurrencias++;
			}else{
				
				v.push_back(x);
			}
		}
		
		if(recurrencias % 2 == 0){
			
			cout << v.size() << endl;
		}else{
			
			cout << v.size()-1 << endl;
		}
		
		v.clear();
	}
	
	return 0;
}