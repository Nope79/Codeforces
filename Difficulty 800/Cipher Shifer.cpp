#include <iostream>
#include <vector>

// Master79
// Cipher Shifer

using namespace std;

int main(){
	
	int t, n;
	char x;
	
	vector <char> v;
	
	cin >> t;
	
	for(int k = 0; k < t; k++){
		
		cin >> n;
		
		bool inicio = false;
		
		for(int i = 0; i < n; i++){
			
			cin >> x;
			
			if(inicio == false){
				
				v.push_back(x);
				inicio = true;
			}else{
				
				if(x == v[v.size()-1]){
					
					inicio = false;
				}
			}
		}
		
		for(int i = 0; i < v.size(); i++){
			
			cout << v[i];
		}
		
		cout << endl;
		v.clear();
	}
	
	return 0;
}