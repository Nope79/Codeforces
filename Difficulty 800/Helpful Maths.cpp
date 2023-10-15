#include <iostream>
#include <vector>

// Master79
// Helpful Maths

using namespace std;

int contador = 0;

void llenar(vector<int>& v1, vector<int>& v2, vector<int>& v3, string cadena);

void mostrar(vector<int> v);

int main(){
	
	vector <int>  v1;
	vector <int> v2;
	vector <int> v3;
	vector <char> suma;
	
	string cadena;
	getline(cin, cadena);
	
	llenar(v1, v2, v3, cadena);
	
	mostrar(v1);
	mostrar(v2);
	mostrar(v3);
	
	return 0;
}

void llenar(vector<int>& v1, vector<int>& v2, vector<int>& v3, string cadena){
	
	for(int i = 0; i < cadena.size(); i++){
		
		if(cadena[i] == '1'){
			
			v1.push_back(1);
		}
		
		else if(cadena[i] == '2'){
			
			v2.push_back(2);
		}
		
		else if(cadena[i] == '3'){
			
			v3.push_back(3);
		}
		
		else{
			
			contador++;
		}
	}
}

void mostrar(vector<int> v){
	
	for(int i = 0; i < v.size(); i++){
		
		cout << v[i];
		
		if(contador > 0){
			
			contador--;
			cout << "+";
		}
	}
}