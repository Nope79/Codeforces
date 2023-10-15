#include <iostream>

// Master79
// Way Too Long Words

using namespace std;

int main(){
	
	std::ios::sync_with_stdio(false);
	
	int x;
	cin >> x;
	
	string basura;
	getline(cin, basura);
	
	for(int i = 0; i < x; i++){
		
		string palabra;
		
		getline(cin, palabra);
		
		if(palabra.size() > 10){
			
			cout << palabra[0] << palabra.size() - 2 << palabra[palabra.size() - 1]<< "\n";
		}else{
			
			cout << palabra << "\n";
		}
	}
	
	return 0;
}