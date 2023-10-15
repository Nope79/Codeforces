#include <iostream>
#include <ctype.h>
#include <stdio.h>

// Master79
// Word

using namespace std;

bool analizarPalabra(string x);

string cambioCase(string x);

int main(){
	
	string x;
	getline(cin, x);
	
	cout << cambioCase(x);
	
	return 0;
}

bool analizarPalabra(string x){
	
	int lowerCase = 0;
	int upperCase = 0;
	
	bool v = true;
	
	for(int i = 0; i < x.size(); i++){
		
		if((int)x[i] < 91){
			upperCase++;
		}else{
			
			lowerCase++;
		}
	}
	
	upperCase > lowerCase ? v = true : v = false;
	
	return v;
}

string cambioCase(string x){
	
	// Todo a mayuscula
	if(analizarPalabra(x) == true){
		
		for(int i = 0; i < x.size(); i++){
			
			x[i] = toupper(x[i]);
		}
	}// Todo a minuscula
	else{
		
		for(int i = 0; i < x.size(); i++){
			
			x[i] = tolower(x[i]);
		}
	}
	return x;
}