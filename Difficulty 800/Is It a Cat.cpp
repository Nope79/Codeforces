#include <iostream>
#include <vector>

// Master79
// Is It a Cat?

using namespace std;

int main(){
	
	vector <char> v;
	vector <char> xd = {'m', 'e', 'o', 'w'};
	int t, n;
	cin >> t;
	
	char x;
	
	string s;
	getline(cin, s);
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		for(int i = 0; i < n; i++){
		
			cin >> x;
			
			if(x < 96){
				
				x += 32;
			}	
			
			if(v.size() == 0){
				
				v.push_back(x);
			}
			
			else if(v[v.size() - 1] != x){
				
				v.push_back(x);
			}
		}
		
		if(v == xd){
			
			cout << "Yes\n";
		}else{
			
			cout << "No\n";
		}
		
		v.clear();
	}
}