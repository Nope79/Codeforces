#include <iostream>

// Master79
// Minimal Square

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		
		int y, z;
		cin >> y >> z;
		
		if(y > z){
			
			z *= 2;
			
			if(y > z){
				
				cout << y * y << endl;
			}else{
				
				cout << z * z << endl;
			}
			
		}else{
			
			y *= 2;
			
			if(z > y){
				
				cout << z * z << endl;
			}else{
				
				cout << y * y << endl;
			}
		}
	}
	
	return 0;
}