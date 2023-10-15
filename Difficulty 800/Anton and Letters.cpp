#include <iostream>
#include <set>

// Master79
// Anton and Letters

using namespace std;

int main(){
	
	set <char> s;
	
	char x = '3';
	
	while(x != '}'){
		
		cin >> x;
		
		if(x + 0 >= 97 && x + 0 <= 122){
			
			s.insert(x);
		}
	}
	
	cout << s.size();
	
	return 0;
}