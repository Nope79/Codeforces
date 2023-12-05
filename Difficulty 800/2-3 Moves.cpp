#include <iostream>
 
// Master79
// 2-3 Moves
 
using namespace std;
 
int main(){
    
    int t, n;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        
        cin >> n;
        
        if(n == 1){
            
            cout << 2 << endl;
        }
        
        else if(n % 3 != 0){
            
            cout << (n / 3) + 1 << endl;
        }else{
            
            cout << n / 3 << endl;
        }
    }
    
    return 0;
}