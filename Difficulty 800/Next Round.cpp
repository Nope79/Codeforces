#include <iostream>
#include <vector>

// Master79
// Next Round

using namespace std;

int main(){
	
	vector <int> v;
	
	int n, x;
	
	cin >> n >> x;
	
	int contador = 0;
	
	for(int i = 0; i < n; i++){
		
		int y;
		cin >> y;
		v.push_back(y);
	}
	
	int a = v[x - 1];
	
	for(int i = 0; i < n; i++){
		
		if(a <= v[i] && v[i] > 0){
			
			contador++;
		}
	}
		
	cout << contador;
	
	return 0;
}