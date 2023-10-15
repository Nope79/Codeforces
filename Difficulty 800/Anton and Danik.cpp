#include <iostream>

// Master79
// Anton and Danik

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	string res;
	getline(cin, res);
	
	string juegos;
	getline(cin, juegos);
	
	int alida = 0;
	int daniel = 0;
	
	for(int i = 0; i < juegos.size(); i++){
		
		if(juegos[i] == 'A'){
			
			alida++;
		}else{
			
			daniel++;
		}
	}
	
	if(alida > daniel){
		
		cout << "Anton";
	}
	
	else if(daniel > alida){
		
		cout << "Danik";
	}else{
		
		cout << "Friendship";
	}
	
	return 0;
}