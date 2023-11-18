#include <iostream>

// Master79
// Marathon

int marathon();

using namespace std;

int main(){
	
	int t;
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cout << marathon() << endl;
	}
	
	return 0;
}

int marathon(){
	
	int contador = 0;
	int timur, x;
	
	cin >> timur;
	
	cin >> x;
	
	if(x > timur) contador++;
	
	cin >> x;
	
	if(x > timur) contador++;
	
	cin >> x;
	
	if(x > timur) contador++;
	
	return contador;
}