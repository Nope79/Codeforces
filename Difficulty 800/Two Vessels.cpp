#include <iostream>
#include <math.h>

// Master79
// Two Vessels

using namespace std;

int main(){
	
	int t;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		int a, b, c;
	
		cin >> a >> b >> c;
	
		double max;
	
		if(a > b){
			
			max = a - b;
		}else{
		
			max = b - a;
		}
	
		max /= 2;
		
		max /= c;
		
		max = ceil(max);
		
		int r = (int)max;
		
		cout << r << endl;
	}
	
	return 0;
}