#include <iostream>

// Master79
// Food for Animals

using namespace std;

int main(){
	
	int t, fDogs, fCats, fDC, dogs, cats;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
		
		cin >> fDogs >> fCats >> fDC >> dogs >> cats;
		
		dogs -= fDogs;
		cats -= fCats;
		
		if(dogs < 0){
			
			dogs = 0;
		}
		
		if(cats < 0 ){
			
			cats = 0;
		}
		
		if((dogs + cats) <= fDC){
			
			cout << "YES\n";
		}else{
			
			cout << "NO\n";
		}
	}
	
	return 0;
}