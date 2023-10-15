#include <iostream>

// Master79
// Fox And Snake 

using namespace std;

int main(){
	
	int filas, columnas;
	
	cin >> filas >> columnas;
	
	int c = 0;
	
	for(int i = 0; i < filas; i++){
		
		for(int j = 0; j < columnas; j++){
			
			if(i % 2 == 0){
			
				cout << "#";
			}else{
				
				if(c % 2 == 0 && j == columnas - 1){
					
					cout << "#";
				}
				
				else if(c % 2 != 0 && j == 0){
					
					cout << "#";
				}
				
				else{
					
					cout << ".";
				}
				
				if(j == columnas - 1){
					
					c++;
				}
			}
		}
		cout << endl;
	}
	
	return 0;
}