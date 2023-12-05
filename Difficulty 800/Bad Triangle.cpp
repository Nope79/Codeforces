#include <iostream>
#include <vector>

// Master79
// Bad Triangle

using namespace std;

int main(){
	
	int t, n, x;
	cin >> t;
	
	vector <int> v;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		for(int j = 0; j < n; j++){
		
			cin >> x;	
			v.push_back(x);
		}
		
		if((v[0] + v[1]) <= v[v.size() - 1]){
			
			cout << 1 << " " << 2 << " " << n << endl;
		}else{
			
			cout << -1 << endl;
		}
		
		v.clear();
	}
	
	
	return 0;
}