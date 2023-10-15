#include <iostream>
#include <string>

// Master79
// Beautiful Year

using namespace std;

int main(){
	
	int x;
	cin >> x;
	
	x++;
	
	string s = to_string(x);
	
	while(s[0] == s[1] || s[0] == s[2] || s[0] == s[3] || s[1] == s[2] || s[1] == s[3] || s[2] == s[3]){
	    
	    x++;
	    s = to_string(x);
	}
	
	cout << x;
	
	return 0;
}