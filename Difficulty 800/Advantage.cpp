#include <iostream>
#include <vector>

// Master79
// Advantage

using namespace std;

int main(){
	
	int t, n, x;
	cin >> t;
	
	vector <int> v;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		int max=0, maxmin=0, pos;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			
			v.push_back(x);
			
			if(x > max){
				
				max = x;
				pos = j;
			}
		}
		
		for(int j = 0; j < v.size(); j++){
			
			if(maxmin < v[j] && j != pos){
				
				maxmin = v[j];
			}
		}
		
		for(int j = 0; j < v.size(); j++){
			
			if(v[j] == max){
				
				cout << max-maxmin << " ";
			}else{
				
				cout << v[j]-max << " ";
			}
		}
		
		cout << endl; 
		
		v.clear();
	}
	return 0;
}