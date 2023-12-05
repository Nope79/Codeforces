#include <iostream>

// Master79
// Flag

using namespace std;

char matriz[110][110];

int main(){
	
	int n, m;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		
		for(int j = 0; j < m; j++){
			
			cin >> matriz[i][j];
		}
	}
	
	bool x = true;
	
	for(int i = 0; i < n - 1; i++){
		
		if(matriz[i][0] == matriz[i + 1][0]){
			
			x = false;
			break;
		}
	}
	
	if(x == false){
		
		cout << "NO\n";
	}else{
		
		for(int i = 0; i < n; i++){
			
			for(int j = 0; j < m - 1; j++){
				
				if(matriz[i][j] != matriz[i][j + 1]){
					
					x = false;
					break;
				}
			}
		}
		
		if(x == false){
			
			cout << "NO\n";
		}else{
			
			cout << "YES\n";
		}
	}
	
	return 0;
}