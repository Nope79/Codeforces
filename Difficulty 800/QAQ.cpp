#include <iostream>
#include <vector>

// Master79
// QAQ

using namespace std;

int main(){
	
	char x;
	
	vector <char> v;
	
	while(cin >> x){
		
		if(x == 'Q' || x == 'A'){
			
			v.push_back(x);
		}
	}
	
	int contador = 0;
	
	for(int i = 0; i < v.size(); i++){
		
		if(v[i] == 'Q'){
			
			for(int j = i+1; j < v.size(); j++){
				
				if(v[j] == 'A'){
					
					for(int k = j+1; k < v.size(); k++){
						
						if(v[k] == 'Q'){
							
							contador++;
						}
					}
				}
			}
		}
	}
	
	cout << contador;
	
	return 0;
}