#include <iostream>
#include <vector>

// Master79
// Restoring Three Numbers

using namespace std;

void ordenarVector(vector <int>& v);

int main(){
	
	vector <int> v;
	
	int x;
	
	for(int i = 0; i < 4; i++){
		
		cin >> x;
		
		v.push_back(x);
	}
	
	ordenarVector(v);
	
	cout << v[0] - v[1] << " " << v[0] - v[2] << " " << v[0] - v[3] << endl;
	
	return 0;
}

void ordenarVector(vector <int>& v){
	
	int aux = 0;
	
	for(int i = 0; i < v.size(); i++){
		
		for(int j = 0; j < v.size() - 1; j++){
			
			if(v[j] < v[j + 1]){
				
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
			}
		}
	}
}