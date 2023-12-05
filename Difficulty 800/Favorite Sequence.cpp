#include <iostream>
#include <vector>

// Master79
// Favorite Sequence

using namespace std;

vector <int> v;

void favoriteSequence();

int main(){
	
	int t, n, x;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> n;
		
		for(int j = 0; j < n; j++){
			
			cin >> x;
			
			v.push_back(x);
		}
		
		favoriteSequence();
		
		v.clear();
	}
	
	return 0;
}

void favoriteSequence(){
	
	int i = 0;
	int j = v.size() - 1;
	
	for(int k = 0; k < v.size(); k++){
		
		if(k % 2 == 0){
			
			cout << v[i++] << " ";
		}else{
			
			cout << v[j--] << " ";
		}
	}
	
	cout << endl;
}