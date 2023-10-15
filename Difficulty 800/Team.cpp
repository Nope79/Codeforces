#include <iostream>

// Master79
// Team

using namespace std;

int main(){
	
	std::ios::sync_with_stdio(false);
	
	int n = 0; 
	cin >> n;
	
	int contador = 0;
	
	for(int i = 0; i < n; i++){
		
		int x, y , z;
		cin >> x >> y >> z;
		
		if((x + y + z)> 1){
			
			contador ++;
		}
	}
	
	cout << contador;
	
	return 0;
}