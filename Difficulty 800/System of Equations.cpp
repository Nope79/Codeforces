#include <iostream>

// Master79
// System of Equations

using namespace std;

int main(){
	
	int n, m;
	cin >> n >> m;
	
	int i = 0, j = 0;
	int contador = 0;
	
	while(i > -1){
		
		while(j > -1){
			
			if(i*i + j == n && i + j*j == m){
				
				contador++;
			}
			
			if(i + j*j > m){
				
				break;
			}
			
			j++;
		}
		
		j=0;
		
		if(i*i + j > n){
			
			break;
		}
		
		i++;
	}
	
	cout << contador;
	
	return 0;
}