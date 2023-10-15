#include <iostream>

// Master79
// Beautiful Matrix

using namespace std;

int matriz[10][10];

int main(){
	
	pair<int, int> a;
	
	for(int i = 1; i <= 5; i++){
		
		for(int j = 1; j <= 5; j++){
			
			int x;
			cin >> x;
			
			if(x == 1){
				
				a.first = i;
				a.second = j;
			}
		}
	}
	
	int movimientos = 0;
	
	while(a.first != 3 || a.second != 3){
		
		if(a.first < 3){
				
			a.first++;
			movimientos++;
		}
		else if(a.first > 3){
				
			a.first--;
			movimientos++;
		}
		
		if(a.second < 3){
			
			a.second++;
			movimientos++;
		}
		else if(a.second > 3){
			
			a.second--;
			movimientos++;
		}
	}
	
	cout << movimientos;
	
	return 0;
}