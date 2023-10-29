#include <iostream>

// Master79
// Soft Drinking

using namespace std;

int main(){
	
	int amigos, botellas, ml, limas, rodajas, sal, mn, sn;
	cin >> amigos >> botellas >> ml >> limas >> rodajas >> sal >> mn >> sn;
	
	ml *= botellas;
	rodajas *= limas;
	
	int contador = 0;
	
	while(ml >= (amigos * mn) && rodajas >= amigos && sal >= (amigos * sn)){
		
		ml -= (amigos * mn);
		rodajas -= amigos;
		sal -= (amigos * sn);
		
		contador++;
	}
	
	cout << contador;
	
	return 0;
}