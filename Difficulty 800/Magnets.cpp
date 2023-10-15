#include <iostream>
#include <vector>

// Master79
// Magnets

using namespace std;

int main(){
	
	vector <string> v;
	
	int imanes;
	cin >> imanes;
	
	string x;
	getline(cin, x);
	
	for(int i = 0; i < imanes; i++){
		
		getline(cin, x);
		
		v.push_back(x);
	} 
	
	int contador = 1;
	
	for(int i = 0; i < v.size() - 1; i++){
		
		if(v[i] != v[i + 1]){
			
			contador++;
		}
	}
	
	cout << contador;
	
	return 0;
}