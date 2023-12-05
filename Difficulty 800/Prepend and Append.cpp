#include <iostream>
#include <vector>

// Master79
// Prepend and Append

using namespace std;

int main(){
	
	int t, n;
	
	vector <char> v;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		for(int j = 0; j < n; j++){
			
			char x;
			cin >> x;
			
			v.push_back(x);
		}
		
		int a = 0;
		int b = v.size() - 1;
		
		int contador = 0;
		
		for(int j = 0; j < v.size(); j += 2){
			
			if(v[a++] != v[b--]){
				
				contador += 2;
			}else{
				
				break;
			}
		}
		
		cout << v.size() - contador << endl;
		
		v.clear();
	}
	
	return 0;
}