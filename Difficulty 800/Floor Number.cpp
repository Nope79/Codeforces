#include <iostream>
#include <math.h>

// Master79
// Floor Number

using namespace std;

int main(){
    
    int t, n, x;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        
        cin >> n >> x;
        
        if(n != 1 && n != 2){
            
            int piso = ceil(((double)n - 2.0) / (double)x) + 1;
            cout << piso << endl;
        }else{
            
            cout << 1 << endl;
        }
    }

    return 0;
}