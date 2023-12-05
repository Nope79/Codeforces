#include <iostream>

// Master79
// Erasing Zeroes

using namespace std;

int limiteInf(string s);
int limiteSup(string s);
int erazeZeroes(int limI, int limS, string s);

int main(){
	
	int t;
	cin >> t;
	
	string s;
	getline(cin, s);
	
	for(int i = 0; i < t; i++){
		
		getline(cin, s);
		
		int limI = limiteInf(s);
		int limS = limiteSup(s);
		
		cout << erazeZeroes(limI, limS, s) << endl;
	}
	
	return 0;
}

int limiteInf(string s){
	
	int lim = s.size() + 10;
	
	for(int i = 0; i < s.size(); i++){
		
		if(s[i] == '1'){
			
			lim = i;
			break;
		}
	}
	
	return lim;
}

int limiteSup(string s){
	
	int lim = -1;
	
	for(int i = s.size() - 1; i >= 0; i--){
		
		if(s[i] == '1'){
			
			lim = i;
			break;
		}
	}
	
	return lim;
}

int erazeZeroes(int limI, int limS, string s){
	
	int zeroes = 0;
	
	for(int i = limI; i <= limS; i++){
		
		if(s[i] == '0'){
			
			zeroes++;
		}
	}
	
	return zeroes;
}