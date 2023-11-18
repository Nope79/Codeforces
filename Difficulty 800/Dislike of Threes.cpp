#include <iostream>

// Master79
// Dislike of Threes

using namespace std;

int likeNumber(int k);

int main(){
	
	int tests, k;
	cin >> tests;
	
	for(int i = 0; i < tests; i++){
		
		cin >> k;
		cout << likeNumber(k) << endl;
	}
	
	return 0;
}

int likeNumber(int k){
	
	int x = 1;
	
	for(int i = 1; i <= k;){
		
		if(x % 3 != 0 && x % 10 != 3){
			
			i++;
		}
		
		x++;
	}
	
	return --x;
}