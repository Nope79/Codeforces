#include <iostream>

// Master79
// Police Recruits

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int capacidad = 0;
	int crimenes = 0;
	
	for(int i = 0; i < n; i++){
		
		int x;
		cin >> x;
		
		if(x < 0 && capacidad <= 0){
			
			crimenes -= x;
		}
		
		else if(x > 0){
			
			capacidad += x;
		}
		
		else if(x < 0 && capacidad > 0){
			
			capacidad += x;
		}
	}
	
	cout << crimenes;
	
	return 0;
}