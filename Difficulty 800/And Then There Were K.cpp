#include <iostream>
#include <vector>

// Master79
// And Then There Were K

using namespace std;

int main(){
	
	long long t, n;
	
	vector <int> v = {0};
	int x = 2;
	
	for(int i = 0; i < 32; i++){
		
		v.push_back(x);
		x*=2;
	}
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
	
		cin >> n;
			
		for(int j = 0; j < v.size()-1; j++){
			
			if(n >= v[j] && n < v[j+1]){
				
				if(v[j] != 0){
					
					cout << v[j]-1 << endl;
				}else{
					
					cout << 0 << endl;
				}
			}
		}
	}
	
	return 0;
}