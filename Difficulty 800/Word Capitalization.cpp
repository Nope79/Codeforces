#include <iostream>
#include <string>
#include <cctype>

// Master79
// Word Capitalization

using namespace std;

int main(){
	
	string x;
	getline(cin, x);
	
	x[0] = toupper(x[0]);
	
	cout << x;
	
	return 0;
}