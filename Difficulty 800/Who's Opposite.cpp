#include <iostream>

// Master79
// Who's Opposite?

using namespace std;

int main(){
	
	int t, a, b, c;
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> a >> b >> c;
		
		int menor = min(a, b);
		int mayor = max(a, b);
		
		if(menor*2 > mayor || c > (mayor-menor)*2){
			
			cout << -1 << endl;
		}else{
			
			int r = c + (mayor-menor);
			
			if(r > (mayor-menor)*2){
				
				cout << r - (mayor-menor)*2 << endl;
			}else{
				
				cout << r << endl;
			}
		}
	}
	
	return 0;
}