#include <iostream>

// Master79
// Polycarp and the Day of Pi

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	string s;
	getline(cin, s);
	
	string pi = "314159265358979323846264338327";
	
	for(int i = 0; i < n; i++){
		
		getline(cin, s);
		
		int contador = 0;
		
		for(int i = 0; i < s.size(); i++){
			
			if(pi[i] == s[i]){
				
				contador++;
			}else{
				
				break;
			}
		}
		cout << contador << endl;
	}
	
	return 0;
}