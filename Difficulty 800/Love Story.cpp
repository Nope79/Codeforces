#include <iostream>

// Master79
// Love Story

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	string x;
	getline(cin, x);
	
	int contador = 0;
	
	for(int j = 0; j < n; j++){
	
		string x;
		getline(cin, x);
		
		for(int i = 0; i < 10; i++){
			
			contador += (x[i] == 'c' && (i == 0 || i == 7)) ? 1 : (x[i] == 'o' && (i == 1 || i == 5)) ? 1 : (x[i] == 'd' && i == 2) ? 1 : (x[i] == 'e' && (i == 3 || i == 8))		? 1 : (x[i] == 'f' && i == 4) ? 1 : (x[i] == 'r' && i == 6) ? 1 : (x[i] == 's' && i == 9) ? 1 : 0;
		}
		
		cout << 10 - contador << endl;
		
		contador =0;
	}	
	
	return 0;
}