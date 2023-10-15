#include <iostream>

// Master79
// Tram

using namespace std;

int main(){
	
	int viajes;
	cin >> viajes;
	
	int suma = 0;
	int max = -1;
	
	for(int i = 0; i < viajes; i++){
		
		int bajan, suben;
		cin >> bajan >> suben;
		
		suma = suma + (suben - bajan);
		
		if(max < suma){
			
			max = suma;
		}
	}
	
	cout << max;
	
	return 0;
}