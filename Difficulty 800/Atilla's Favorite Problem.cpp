#include <iostream>

// Master79
// Atilla's Favorite Problem

using namespace std;

int main(){
    
    int t;
    cin >> t;
    
    char x = 0;
    
    for(int i = 0; i < t; i++){
        
        int n = 0;
        cin >> n;
        
        for(int j = 0; j < n; j++){
            
            char a;
            cin >> a;
            
            if(a > x){
                
                x = a;
            }
        }
        
        cout << x - 96 << endl;
        x = 0;
    }

    return 0;
}