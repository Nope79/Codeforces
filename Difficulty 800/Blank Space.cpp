#include <iostream>
#include <vector>

// Master79
// Blank Space

using namespace std;

int main(){
	
	vector <int> v;
	
	int t, n, x;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			
			v.push_back(x);
		}
		
		int tam = 0;
		int max = 0;
		
		for(int j = 0; j < v.size(); j++){
			
			if(v[j] == 0){
				
				tam++;
			}else{
				tam = 0;
			}
			
			if(tam > max){
					
				max = tam;
			}
		}
		
		cout << max << endl;
		
		v.clear();
	}
	
	return 0;
}