#include <iostream>
#include <vector>

// Master79
// Odd/Even Increments

using namespace std;

bool listo(vector <int> v);
bool paresImpares(vector <int> v);
bool roundOp2(vector <int> v);
bool roundOp1(vector <int> v);

int main(){
	
	int t, n, x;
	vector <int> v;
	
	cin >> t;
	
	for(int p = 0; p < t; p++){
		
		cin >> n;
		
		for(int i = 0; i < n; i++){
			
			cin >> x;
			
			v.push_back(x);
		}
		
		if(listo(v) == false){
			
			if(paresImpares(v) == true){
				
				cout << "YES\n";
			}else{
				
				cout << "NO\n";
			}
		}else{
			
			cout << "YES\n";
		}
		
		v.clear();
	}
	
	return 0;
}

bool listo(vector <int> v){
	
	bool x = true;
	
	if(v[0] % 2 == 0){
		
		for(int i = 1; i < v.size(); i++){
			
			if(v[i] % 2 != 0){
				
				x = false;
				break;
			}
		}
	}else{
		
		for(int i = 0; i < v.size(); i++){
			
			if(v[i] % 2 == 0){
				
				x = false;
				break;
			}
		}
	}
	
	return x;
}

bool paresImpares(vector <int> v){
	
	bool x = true;
	int op;
	
	if(v[0] % 2 == 0){
		
		x = roundOp2(v);
	}else{
		
		x = roundOp1(v);
	}
	
	return x;
}

bool roundOp1(vector <int> v){
	
	bool x = true;
	
	for(int i = 0; i < v.size(); i+=2){
		
		if(v[i] % 2 == 0){
			
			x = false;
			break;
		}
	}
	
	if(x == true){
		
		for(int i = 1; i < v.size(); i+=2){
			
			if(v[i] % 2 != 0){
				
				x = false;
				break;
			}
		}
	}
	
	return x;
}

bool roundOp2(vector <int> v){
	
	bool x = true;
	
	for(int i = 0; i < v.size(); i+=2){
		
		if(v[i] % 2 != 0){
			
			x = false;
			break;
		}
	}
	
	if(x == true){
		
		for(int i = 1; i < v.size(); i+=2){
			
			if(v[i] % 2 == 0){
				
				x = false;
				break;
			}
		}
	}
	
	return x;
}