#include <iostream>
#include <vector>

// Master79
// Stone Game

using namespace std;

int puntoMayor(vector <int> v);
int puntoMenor(vector <int> v);

int main(){
	
	int t, n, x;
	cin >> t;
	
	vector <int> v;
	
	for(int z = 0; z < t; z++){
		
		cin >> n;
		
		for(int i = 0; i < n; i++){
			
			cin >> x;
			
			v.push_back(x);
		}
		
		int pmx= puntoMayor(v);
		int pmn = puntoMenor(v);
		int r;
		
		int a = max(pmx, pmn);
		int b = (min(pmx, pmn)-n-1)*-1;
		
		if(pmx > n/2){
			
			pmx = n-pmx+1;
		}
		
		if(pmn > n/2){
			
			pmn = n-pmn+1;
		}
		
		int c = pmx + pmn;
		
		r = min(a, b);
		r = min(c, r);
		
		cout << r << endl;
		
		v.clear();
	}
	
	return 0;
}

int puntoMayor(vector <int> v){
	
	int mayor = -1;
	int pos = 0;
	
	for(int i = 0; i < v.size(); i++){
		
		if(v[i] > mayor){
			
			mayor = v[i];
			pos = i;
		}
	}
	
	return pos+1;
}

int puntoMenor(vector <int> v){
	
	int menor = 200;
	int pos = 0;
	
	for(int i = 0; i < v.size(); i++){
		
		if(v[i] < menor){
			
			menor = v[i];
			pos = i;
		}
	}
	
	return pos+1;
}