#include <iostream>
#include <vector>

// Master79
// Sum of Round Numbers

using namespace std;

void roundNumbers(int x);

void mostrarVector();

vector <int> v;

int main(){
	
	int t, x;
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> x;
		
		roundNumbers(x);	
		v.clear();
	}
	
	return 0;
}

void roundNumbers(int x){
	
	while(true){
		
		if(x >= 10000 && x % 10000 != 0){
			
			v.push_back(x - (x % 10000));
			x %= 10000;
		}
		
		else if(x >= 1000 && x % 1000 != 0){
			
			v.push_back(x - (x % 1000));
			x %= 1000;
		}
		
		else if(x >= 100 && x % 100 != 0){
			
			v.push_back(x - (x % 100));
			x %= 100;
		}
		
		else if(x >= 10 && x % 10 != 0){
			
			v.push_back(x - (x % 10));
			x %= 10;
		}else{
			
			v.push_back(x);
			break;
		}
	}
	
	mostrarVector();
}

void mostrarVector(){
	
	cout << v.size() << endl;
	
	for(int i = 0; i < v.size(); i++){
		
		cout << v[i] << " ";
	}
	
	cout << endl;
}