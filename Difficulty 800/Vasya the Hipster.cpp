#include <iostream>

// Master79
// Vasya the Hipster

using namespace std;

int main(){
	
	int rojos, azules;
	
	cin >> rojos >> azules;
	
	if(rojos > azules){
		
		cout << azules << " " << ((rojos - azules) / 2);
	}
	
	else if(azules > rojos){
		
		cout << rojos << " " << ((azules - rojos) / 2);
	}else{
		
		cout << rojos << " " << 0;
	}
	
	return 0;
}