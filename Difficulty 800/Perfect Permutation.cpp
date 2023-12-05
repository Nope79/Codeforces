#include <iostream>
#include <vector>

// Master79
// Perfect Permutation

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	vector <int> v;
	
	if(n % 2 != 0){
		
		cout << -1;
	}else{
		
		for(int i = 1; i <= n; i++){
		
			v.push_back(i);
		}
		
		int aux;
		
		for(int i = 0; i < v.size(); i+=2){
			
			aux = v[i];
			v[i] = v[i+1];
			v[i+1] = aux;
		}
		
		for(int i = 0; i < v.size(); i++){
			
			cout << v[i] << " ";
		}
	}
	
	return 0;
}