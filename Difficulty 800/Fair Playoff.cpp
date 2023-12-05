#include <iostream>
#include<algorithm>

// Master79
// Fair Playoff

using namespace std;

int main(){
	
	int t, s1, s2, s3, s4;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> s1 >> s2 >> s3 >> s4;
		
		int max1 = max(s1, s2);
		int max2 = max(s3, s4);
		
		int min1 = min(s1, s2);
		int min2 = min(s3, s4);
		
		if(max1 > min2 && max2 > min1){
			
			cout << "YES\n";
		}else{
			
			cout << "NO\n";
		}
	}
	
	return 0;
}