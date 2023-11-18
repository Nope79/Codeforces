#include <iostream>
#include <set>

// Master79
// CopyCopyCopyCopyCopy

using namespace std;

int main(){
	
	set <int> st;
	
	int t, n, x;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			
			st.insert(x);
		}
		
		cout << st.size() << endl;
		st.clear();
	}
}