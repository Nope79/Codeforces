#include <iostream>

// Master79
// Short Substrings

using namespace std;

string descifrar(string x);

int main(){
	
	int a;
	cin >> a;
	
	string x;
	getline(cin, x);
	
	for(int i = 0; i < a; i++){
		
		getline(cin, x);
		cout << descifrar(x) << endl;
	}
	
	return 0;
}

string descifrar(string x){
	
	string s = "";
	
	for(int i = 0; i < x.size(); i += 2){
		
		s += x[i];
	}
	
	if(x.size() % 2 == 0){
		
		s += x[x.size() - 1];
	}
	
	return s;
}