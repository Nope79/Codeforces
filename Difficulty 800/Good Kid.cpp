#include <iostream>
#include <vector>

// Master79
// Good Kid

using namespace std;

void ordenar(vector<long long>& v){
	
	long long aux = 0;
	
	for(long long i = 0; i < v.size(); i++){
		
		for(long long j = 0; j < v.size() - 1; j++){
			
			if(v[j] > v[j + 1]){
				
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
			}
		}
	}
}

int main(){
	
	vector <long long> v;
	
	long long cases;
	cin >> cases;
	
	long long producto = 1;
	
	for(long long i= 0; i < cases; i++){
		
		long long tam;
		cin >> tam;
		
		for(long long j = 0; j < tam; j++){
			
			long long x;
			cin >> x;
			
			v.push_back(x);
		}
		
		ordenar(v);
		
		v[0]++;
		
		for(long long k = 0; k < tam; k++){
					
			producto *= v[k];
		}
		
		cout << producto << "\n";
		v.clear();
		producto = 1;
	}
	
	return 0;
}