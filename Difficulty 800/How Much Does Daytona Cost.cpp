#include <iostream>

// Master79
// How Much Does Daytona Cost?

using namespace std;

int main(){
    
   int t, n, k, x;
   cin >> t;
   
   for(int i = 0; i < t; i++){
        
       cin >> n >> k;
       
       bool b = false;
       
       for(int j = 0; j < n; j++){
           
           cin >> x;
           
           if(x == k){
               
               b = true;
           }
       }
       
       if(b == true){
           
           cout << "YES\n";
       }else{
           
           cout << "NO\n";
       }
    }
    
    return 0;
}