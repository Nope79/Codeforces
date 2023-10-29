#include <iostream>
#include <vector>

// Master79
// Honest Coach

using namespace std;

void llenarVector(int x);

void ordenarVector();

int menorRango();

vector <int> v;

int main(){
	
	int test, x;
	cin >> test;
	
	for(int i = 0; i < test; i++){
		
		cin >> x;
		
		llenarVector(x);
		ordenarVector();
		
		cout << menorRango() << endl;
		v.clear();
	}
	
	return 0;
}

void llenarVector(int x){
	
	int a;
	
	for(int i = 0; i < x; i++){
		
		cin >> a;
		v.push_back(a);
	}
}

void ordenarVector(){
	
	int aux;
	
	for(int i = 0; i < v.size(); i++){
		
		for(int j = 0; j < v.size() - 1; j++){
			
			if(v[j] > v[j + 1]){
				
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
			}
		}
	}
}

int menorRango(){
	
	int menor = 10000000;
	int resultado = 0;
	
	for(int i = 0; i < v.size() - 1; i++){
		
		resultado = v[i] - v[i + 1];
		
		if(resultado < 0){
			
			resultado *= -1;
		}
		
		if(menor > resultado){
			
			menor = resultado;
		}
	}
	
	return menor;
}