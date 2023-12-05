#include <iostream>

// Master79
// Night at the Museum

using namespace std;

int main(){
	
	string a;
	getline(cin, a);
	
	string s = "a" + a;
	
	int suma = 0;
	
	int horario, antihorario;
	
	for(int i = 0; i < s.size() - 1; i++){
		
		horario = (s[i + 1] - s[i]);
		
		if(horario < 0){
			
			horario += 26;
		}
		
		antihorario = (s[i] - s[i + 1]);
		
		if(antihorario < 0){
			
			antihorario += 26;
		}
		
		suma += min(horario, antihorario);
	}
	
	cout << suma;
	
	return 0;
}