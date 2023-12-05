#include <iostream>

// Master79
// Mahmoud and Ehab and the even-odd game

using namespace std;

int main(){
	
	int x;
	cin >> x;
	
	if(x % 2 != 0){
		
		cout << "Ehab";
	}else{
		
		cout << "Mahmoud";
	}
	
	return 0;
}