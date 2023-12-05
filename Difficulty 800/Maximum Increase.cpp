#include <iostream>
#include <vector>

// Master79
// Maximum Increase

using namespace std;

int main(){
	
	int n, x;
	cin >> n;
	
	vector <int> v;
	
	for(int i = 0; i < n; i++){
		
		cin >> x;
		
		v.push_back(x);
	}
	
	int longitud = 1;
	int mx = 1;
	
	for(int i = 0; i < v.size() - 1; i++){
		
		if(v[i] < v[i+1]){
			
			longitud++;
			
			if(mx < longitud){
				
				mx = longitud;
			}
		}else{
			
			longitud = 1;
		}
	}
	
	cout << mx;
	
	return 0;
}