#include <iostream>
#include <vector>

// Master79
// Stones on the Table

using namespace std;

int main(){
	
	int piedras;
	cin >> piedras;
	
	vector <char> v;
	
	for(int i = 0; i < piedras; i++){
		
		char x;
		cin >> x;
		v.push_back(x);
	}
	
	int contador = 0;
	
	for(int i = 0; i < piedras - 1; i++){
		
		if(v[i] == v[i + 1]){
			
			contador++;
		}
	}
	
	cout << contador;
	
	return 0;
}