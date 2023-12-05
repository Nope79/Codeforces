#include <iostream>

// Master79
// Water Buying

using namespace std;

int main(){
	
	long long t, botellas, litro, doslitros;
	
	cin >> t;
	
	for(long long i = 0; i < t; i++){
		
		cin >> botellas >> litro >> doslitros;
		
		long long preciouno = botellas * litro;
		long long preciodos;
		
		if(botellas % 2 == 0){
			
			preciodos = doslitros * botellas / 2;
			
		}else{
			
			botellas--;
			preciodos = doslitros * botellas / 2;
			preciodos += litro;
		}
		
		if(preciodos > preciouno){
			
			cout << preciouno << endl;
		}else{
			
			cout << preciodos << endl;
		}
	}
	
	return 0;
}