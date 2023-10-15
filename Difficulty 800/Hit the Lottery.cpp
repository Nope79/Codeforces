#include <iostream>

// Master79
// Hit the Lottery

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int contador = 0;
	
	while(n > 0){
		
		if(n >= 100){
			
			contador+= n / 100;
			
			n %= 100;
		}
		
		else if(n >= 20){
			
			contador+= n / 20;
			
			n %= 20;
		}
		
		else if(n >= 10){
			
			contador+= n / 10;
			
			n %= 10;
		}
		
		else if(n >= 5){
			
			contador+= n / 5;
			
			n %= 5;
		}
		
		else if(n >= 1){
			
			contador+= n;
			
			n = 0;
		}
	}
	
	cout << contador;
	
	return 0;
}