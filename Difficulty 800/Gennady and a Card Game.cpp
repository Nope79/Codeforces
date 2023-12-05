#include <iostream>

// Master79
// Gennady and a Card Game

using namespace std;

int main(){
	
	string card;
	string hand;
	
	getline(cin, card);
	getline(cin, hand);
	
	bool b = false;
	
	for(int i = 0; i < 14; i+=3){
		
		if(card[0] == hand[i]){
			
			b = true;
			break;
		}
	} 
	
	if(b == false){
		
		for(int i = 1; i < 14; i+=3){
		
			if(card[1] == hand[i]){
			
				b = true;
				break;
			}
		} 
	}
	
	(b == true) ? cout << "YES\n" : cout << "NO\n";
	
	return 0;
}