#include <iostream>
#include <vector>

// Master79
// I_love_\%username\%

using namespace std;

int main(){
	
	vector <int> v;
	
	int n;
	cin >> n;
	
	int contador = 0;
	
	for(int i = 0; i < n; i++){
		
		int x;
		cin >> x;
		
		v.push_back(x);
	}
	
	int ref = v[0];
	
	for(int i = 1; i < v.size(); i++){
		
		if(ref < v[i]){
			
			ref = v[i];
			
			contador++;
		}
	}
	
	ref = v[0];
	
	for(int i = 1; i < v.size(); i++){
		
		if(ref > v[i]){
			
			ref = v[i];
			contador++;
		}
	}
	
	cout << contador;
	
	return 0;
}