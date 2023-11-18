#include <iostream>

// Master79
// Div. 7

using namespace std;

int main(){
    
   int t, n;
   cin >> t;
   
   for(int i = 0; i < t; i++){
        
       cin >> n;
       
       if(n % 7 == 0){
           
           cout << n << endl;
       }else{
           
           int x = n - (n % 10);
           
           for(x ; ; x++){
               
               if(x % 7 == 0){
           
                   cout << x << endl;
                   break;
               }
           }
       }
   }

    return 0;
