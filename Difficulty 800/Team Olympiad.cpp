#include <iostream>
#include <vector>

// Master79
// Team Olympiad

using namespace std;

int main(){
	
	std::ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	
	int contador1 = 0; 
	int contador2 = 0;
	int contador3 = 0;
	
	vector <int> v1;
	vector <int> v2;
	vector <int> v3;
	
	for(int i = 0; i < n; i++){
		
		int x;
		cin >> x;
		
		if(x == 1){
			
			contador1++;
			
			v1.push_back(i + 1);
		}
	
		else if(x == 2){
			
			contador2++;
			
			v2.push_back(i + 1);
		}else{
			
			contador3++;
			
			v3.push_back(i + 1);
		}
	}
	
	int menor = 0;
	
	if(contador1 <= contador2 && contador1 <= contador3){
		
		menor = contador1;
	}
	
	else if(contador2 <= contador1 && contador2 <= contador3){
		
		menor = contador2;
	}else{
		
		menor = contador3;
	}
	
	cout << menor << "\n";
	
	for(int i = 0; i < menor; i++){
			
		cout << v1[i] << " " << v2[i] << " " << v3[i] << "\n";
	}
	
	return 0;
}