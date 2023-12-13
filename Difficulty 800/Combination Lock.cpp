#include <iostream>
#include <vector>

// Master79
// Combination Lock

using namespace std;

int main(){
	
	int n;
	char x;
	vector <char> v1, v2;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		
		cin >> x;
		
		v1.push_back(x);
	}
	
	for(int i = 0; i < n; i++){
		
		cin >> x;
		
		v2.push_back(x);
	}
	
	int sumatoria = 0, giro1, giro2;
	
	for(int i = 0; i < n; i++){
		
		giro1 = v2[i] - v1[i];
		giro2 = v1[i] - v2[i];
		
		if(giro1 < 0){
			
			giro1+=10;
		}
		
		if(giro2 < 0){
			
			giro2+=10;
		}
		
		sumatoria+=min(giro1, giro2);
	}
	
	cout << sumatoria;
	
	return 0;
}