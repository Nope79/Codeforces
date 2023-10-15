#include <iostream>
#include <vector>

// Master79
// Queue at the School

using namespace std;

int main(){
	
	vector <char> v;
	
	int cola, tiempo;
	
	cin >> cola >> tiempo;
	
	for(int i = 0; i < cola; i++){
		
		char x;
		
		cin >> x;
		
		v.push_back(x);
	}
	
	for(int i = 0; i < tiempo; i++){
		
		char aux = 'x';
		
		for(int j = 0; j < v.size() - 1; j++){
			
			if(v[j] == 'B' && v[j + 1] == 'G'){
				
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
				j++;
			}
		}
	}
	
	for(int i = 0; i < v.size(); i++){
		
		cout << v[i];
	}
	
	return 0;
}