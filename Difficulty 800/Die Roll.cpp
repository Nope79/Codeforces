#include <iostream>

// Master79
// Die Roll

using namespace std;

int main(){
	
	int a, b, max;
	cin >> a >> b;
	
	(a > b) ? max = a : max = b;
	
	if(max == 1){
		
		cout << "1/1";
	}
	
	else if(max == 2){
		
		cout << "5/6";
	}
	
	else if(max == 3){
		
		cout << "2/3";
	}
	
	else if(max == 4){
		
		cout << "1/2";
	}
	
	else if(max == 5){
		
		cout << "1/3";
	}
	
	else if(max == 6){
		
		cout << "1/6";
	}
	
	else{
		
		cout << "0/1";
	}
	
	return 0;
}