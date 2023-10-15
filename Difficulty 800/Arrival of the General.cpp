#include <iostream>

// Master79
// Arrival of the General

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int max = 0;
	int min = 110;
	
	int maxP, minP = 0;
	
	int tiempo = 0;
	
	for(int i = 1; i <= n; i++){
		
		int a;
		cin >> a;
		
		if(max < a){
			
			max = a;
			maxP = i;
		}
		
		if(min >= a){
			
			min = a;
			minP = i;
		}
	}
	
	(maxP < minP) ? tiempo = (maxP - 1) + (n - minP) : tiempo = (maxP - 1) + (n - minP);
	(maxP < minP) ? : tiempo--;
	
	cout << tiempo;
	
	return 0;
}