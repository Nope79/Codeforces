#include <iostream>

// Master79
// Greg's Workout

using namespace std;

int main(){
	
	int n, x;
	cin >> n;
	
	int c = 1;
	int chest = 0;
	int bicep = 0;
	int back = 0;
	
	for(int i = 0; i < n; i++){
		
		cin >> x;
		
		if(c == 1){
			
			chest += x;
			c++;
		}
		
		else if(c == 2){
			
			bicep += x;
			c++;
		}
		
		else if(c == 3){
			
			back += x;
			c = 1;
		}
	}
	
	if(chest > bicep && chest > back){
		
		cout << "chest\n";
	}
	
	else if(bicep > chest && bicep > back){
		
		cout << "biceps\n";
	}else{
		
		cout << "back\n";
	}
	
	return 0;
}