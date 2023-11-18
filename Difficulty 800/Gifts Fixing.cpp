#include <iostream>
#include <vector>

// Master79
// Gifts Fixing

using namespace std;

int menor(vector <int>& v);

void comer(vector <int>& v, vector <int>& aux, int menor);

long long sumar(vector <int>& v, vector <int>& v2);

int main(){
	
	int t, n, x;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		vector <int> dulces;
		vector <int> naranjas;
		
		cin >> n;
		
		for(int i = 0; i < n; i++){
			
			cin >> x;
			
			dulces.push_back(x);
		}
		
		for(int i = 0; i < n; i++){
			
			cin >> x;
			
			naranjas.push_back(x);
		}
		
		int menorDulces = menor(dulces);
		int menorNaranjas = menor(naranjas);
		
		vector <int> comerDulces;
		vector <int> comerNaranjas;
		
		comer(dulces, comerDulces, menorDulces);
		comer(naranjas, comerNaranjas, menorNaranjas);
		
		cout << sumar(comerDulces, comerNaranjas) << endl;
	}
	
	return 0;
}

int menor(vector <int>& v){
	
	int menor = 10000000001;
	
	for(int i = 0; i < v.size(); i++){
		
		if(menor > v[i]){
			
			menor = v[i];
		}
	}
	
	return menor;
}

void comer(vector <int>& v, vector <int>& aux, int menor){
	
	for(int i = 0; i < v.size(); i++){
		
		aux.push_back(v[i] - menor);
	}
}

long long sumar(vector <int>& v, vector <int>& v2){
	
	long long sumatoria = 0;
	
	for(int i = 0; i < v.size(); i++){
		
		sumatoria += (v[i] > v2[i]) ? v[i] : v2[i];
	}
	
	return sumatoria;
}