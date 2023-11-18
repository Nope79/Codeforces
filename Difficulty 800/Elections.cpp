#include <iostream>
#include <vector>

// Master79
// Elections

using namespace std;

int main(){
	
	int t, a;
	
	vector <int> v;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		for(int j = 0; j < 3; j++){
			
			cin >> a;
			
			v.push_back(a);
		}
		
		int max = -1;
		
		for(int j = 0; j < 3; j++){
			
			if(max < v[j]) max = v[j];
		}
		
		if(v[0] != v[1] && v[0] != v[2] && v[1] != v[2]){
			
			for(int j = 0; j < 3; j++){
				
				if(max != v[j]){
					
					cout << max + 1 - v[j] << " ";
				}else{
					
					cout << 0 << " ";
				}
			}
		}
		
		else if((v[0] > v[1] && v[0] > v[2]) || (v[1] > v[0] && v[1] > v[2]) || (v[2] > v[0] && v[2] > v[1])){
			
			for(int j = 0; j < 3; j++){
				
				if(max == v[j]){
					
					cout << 0 << " ";
				}else{
					
					cout << max + 1 - v[j] << " ";
				}
			}
		}else{
			
			max++;
			
			for(int j = 0; j < 3; j++){
				
				cout << max - v[j] << " ";
			}
		}
		
		cout << endl;
		
		v.clear();
	}
	
	return 0;
}