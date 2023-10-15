#include <iostream>
#include <vector>

// Master79
// The New Year: Meeting Friends

using namespace std;

int main(){
	
	int a, b, c;
	cin >> a >> b >> c;
	
	vector <int> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	
	int aux;
	
	for(int i = 0; i < 3; i++){
		
		for(int j = 0; j < 2; j++){
			
			if(v[j] > v[j + 1]){
				
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
			}
		}
	}
	
	cout << (v[2] - v[1]) + (v[1] - v[0]) << endl;
	
	return 0;
}