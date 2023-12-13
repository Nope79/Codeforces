#include <iostream>
#include <vector>

// Master79
// Three Pairwise Maximums

using namespace std;

int main(){
	
	int t, x, y, z;
	cin >> t;
	
	vector <int> v;
	
	for(int k = 0; k < t; k++){
		
		cin >> x >> y >> z;
		
		if(x == y && y == z){
			
			cout << "YES\n";
			cout << x << " " << x << " " << x << endl;
		}
		
		else if(x != y && x != z && y != z){
			
			cout << "NO\n";
		}else{
			
			v.push_back(x);
			v.push_back(y);
			v.push_back(z);
		
			int mayor = -1, menor = 1000000001;
		
			for(int i = 0; i < 3; i++){
			
				if(mayor < v[i]){
				
					mayor = v[i];
				}
			}
		
			for(int i = 0; i < 3; i++){
			
				if(menor > v[i]){
				
					menor = v[i];
				}
			}
			
			int contador = 0;
			
			for(int i = 0; i < 3; i++){
				
				if(menor == v[i]){
					
					contador++;
				}
			}
			
			if(contador == 2){
				
				cout << "NO\n";
			}else{
				
				cout << "YES\n";
				cout << menor << " " << menor << " " << mayor << endl;
			}
		}	
		
		v.clear();	
	}
	
	return 0;
}