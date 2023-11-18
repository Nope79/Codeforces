#include <iostream>

// Master79
// Phoenix and Balance

using namespace std;

int main(){
    
   int t, n;
   cin >> t;
   
   for(int i = 0; i < t; i++){
        
       int r = 2;
       cin >> n;
       
       for(int j = 2; j < n; j+=2){
           
           r = (r * 2) + 2;
       }
       
       cout << r << endl;
    }
    
    return 0;
}