#include <iostream>

// Master79
// Choosing Teams

using namespace std;

int main(){
	
	int n, k, x;
	cin >> n >> k;
	
	int contador = 0;
	
	for(int i = 0; i < n; i++){
		
		cin >> x;
		
		if((x + k) <= 5){
			
			contador++;
		}
	}
	
	cout << contador / 3;
	
	return 0;
}