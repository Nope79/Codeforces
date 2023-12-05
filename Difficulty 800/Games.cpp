#include <iostream>
#include <vector>

// Master79
// Games

using namespace std;

int main(){
	
	int n, x, y;
	cin >> n;
	
	vector <int> anfitrion;
	vector <int> visitante;
	
	for(int i = 0; i < n; i++){
		
		cin >> x >> y;
		anfitrion.push_back(x);
		visitante.push_back(y);
	}
	
	int cont = 0;
	
	for(int i = 0; i < n; i++){
		
		for(int j = 0; j < n; j++){
			
			if(j != i){
				
				if(anfitrion[i] == visitante[j]){
					
					cont++;
				}
			}	
		}
	}
	
	cout << cont;
	
	return 0;
}