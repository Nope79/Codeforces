#include <iostream>

// Master79
// Soldier and Bananas

using namespace std;

int main(){
	
	int pay, dollars, bananas;
	cin >> pay >> dollars >> bananas;
	
	int total = 0;
	
	for(int i = 1; i <= bananas; i++){
		
		total += (i * pay);
	}
	
	if(total < dollars){
		
		cout << 0;
	}else{
		
		cout << (total - dollars);
	}
	
	return 0;
}