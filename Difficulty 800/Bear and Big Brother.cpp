#include <iostream>

// Master79
// Bear and Big Brother

using namespace std;

int main(){
	
	int limak, bob;
	
	cin >> limak >> bob;
	
	int contador = 0;
	
	while(limak <= bob){
		
		limak *= 3;
		bob *= 2;
		
		contador++;
	}
	
	cout << contador;
	
	return 0;
}