#include <iostream>
#include <vector>

// Master79
// Balanced Array

using namespace std;

vector <int> v;
int t, n;

void llenarVector();

void imprimirPrimerosPares();

void imprimirComplementosImpares();

int main(){
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		if((n / 2) % 2 == 0){
			
			cout << "YES\n";
			
			llenarVector();
			imprimirPrimerosPares();
			imprimirComplementosImpares();
		}else{
		
			cout << "NO\n";
		}
		
		v.clear();
	}
	
	return 0;
}

void llenarVector(){
	
	for(int i = 1; i <= (n + 1); i++){
		
		v.push_back(i);
	}
}

void imprimirPrimerosPares(){
	
	for(int i = 0; i < n; i++){
		
		if(v[i] % 2 == 0){
			
			cout << v[i] << " ";
		}
	}
}

void imprimirComplementosImpares(){
	
	for(int i = 0; i < n / 2; i++){
		
		if(v[i] % 2 != 0){
			
			cout << v[i] << " ";
		}
	}
	
	for(int i = v.size() - 1; i > (n / 2) + 1; i--){
		
		if(v[i] % 2 != 0){
			
			cout << v[i] << " ";
		}
	}
	
	cout << endl;
}