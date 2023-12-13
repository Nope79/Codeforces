#include <iostream>
#include <vector>

// Master79
// Cypher

using namespace std;

void cypher(vector <int>& v);
void imprimir(vector <int> v);

int main(){
	
	int t, n, x;
	vector <int> v;
	
	cin >> t;
	
	for(int z = 0; z < t; z++){
		
		cin >> n;
		
		for(int i = 0; i < n; i++){
			
			cin >> x;
			
			v.push_back(x);
		}
		
		cypher(v);
		imprimir(v);
		
		v.clear();
	}
	
	return 0;
}

void cypher(vector <int>& v){
	
	int moves;
	char c;
	
	for(int i = 0; i < v.size(); i++){
		
		cin >> moves;
		
		int up = 0, down = 0;
		
		for(int j = 0; j < moves; j++){
			
			cin >> c;
			
			if(c == 'U'){
				
				up++;
			}else{
				
				down++;
			}
		}
		
		int m = 0;
		
		if(down > up){
			
			m = down-up;
			
			v[i]+=m;
			
			if(v[i] > 9){
				
				v[i] -= 10;
			}
			
		}else{
			
			m = up-down;
			
			v[i]-=m;
			
			if(v[i] < 0){
				
				v[i]+=10;
			}
		}
	}
}

void imprimir(vector <int> v){
	
	for(int i = 0; i < v.size(); i++){
		
		cout << v[i] << " ";
	}
	
	cout << endl;
}