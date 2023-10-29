#include <iostream>

// Master79
// Black Square

using namespace std;

int main(){
	
	int array[10];
	
	for(int i = 0; i < 4; i++){
		
		cin >> array[i];
	}
	
	int contador = 0;
	
	string partida;
	
	getline(cin, partida);
	getline(cin, partida);
	
	for(int i = 0; i < partida.size(); i++){
		
		if('1' == partida[i]){
			
			contador += array[0];
		}
		
		else if('2' == partida[i]){
			
			contador += array[1];
		}
		
		else if('3' == partida[i]){
			
			contador += array[2];
		}
		
		else if('4' == partida[i]){
			
			contador += array[3];
		}
	}
	
	cout << contador;
	
	return 0;
}