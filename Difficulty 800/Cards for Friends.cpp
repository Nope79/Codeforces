#include <iostream>

// Master79
// Cards for Friends

using namespace std;

int papel(int ancho, int alto);

int main(){
	
	int t, ancho, alto, amigos;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> ancho >> alto >> amigos;
		
		if(papel(ancho, alto) >= amigos){
			
			cout << "YES\n";
		}else{
			
			cout << "NO\n";
		}
	}
	
	return 0;
}

int papel(int ancho, int alto){
	
	int an = 1, al = 1;
	
	while(ancho % 2 == 0){
		
		ancho /= 2;
		
		an *= 2;
	}
	
	while(alto % 2 == 0){
		
		alto /= 2;
		
		al *= 2;
	}
	
	return an * al;
}