#include <iostream>
#include <vector>

// Master79
// To My Critics

using namespace std;

int main(){
    
   int t, a, b, c;
   cin >> t;
   
   for(int i = 0; i < t; i++){
        
       cin >> a >> b >> c;
       
       if(a + b >= 10 || a + c >= 10 || b + c >= 10){
           
           cout << "YES\n";
       }else{
           
           cout << "NO\n";
       }
    }
    
    return 0;
}