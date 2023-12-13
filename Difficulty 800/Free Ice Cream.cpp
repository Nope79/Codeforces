#include <iostream>

// Master79
// Free Ice Cream

using namespace std;

int main(){
	
	long long n, x, helado;
	cin >> n >> x;
	
	char op;
	
	long long tristes = 0;
	
	for(long long i = 0; i < n; i++){
		
		cin >> op;
		cin >> helado;
		
		if(op == '+'){
			
			x+=helado;	
		}else{
			
			if(x >= helado){
				
				x-=helado;
			}else{
				
				tristes++;
			}
		}
	}
	
	cout << x << " " << tristes;
	
	return 0;
}