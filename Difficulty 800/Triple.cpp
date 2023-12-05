#include <iostream>
#include <vector>

// Master79
// Triple

using namespace std;

int main(){
	
	std::ios::sync_with_stdio(false);
	
	int t, n, x;
	cin >> t;
	
	vector <int> v;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		int mayor = 0;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			
			if(x > mayor){
				
				mayor = x;
			}
			
			v.push_back(x);
		}
		
		int arreglo[mayor+10];
		
		for(int j = 0; j <= mayor; j++){
			
			arreglo[j] = 0;
		}
		
		for(int j = 0; j < v.size(); j++){
			
			arreglo[v[j]]++;
		}
		
		int val = -1;
		
		for(int j = 0; j <= mayor; j++){
			
			if(arreglo[j] >= 3){
				
				val = j;
				break;
			}
		}
		
		cout << val << endl;
		v.clear();
	}
}