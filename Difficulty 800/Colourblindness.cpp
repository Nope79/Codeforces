#include <iostream>
#include <vector>

// Master79
// Colourblindness

using namespace std;

vector <char> v1;
vector <char> v2;

int main(){
    
   int t, n;
   cin >> t;
   
   char x;
   
   for(int i = 0; i < t; i++){
        
       cin >> n;
       
       for(int j = 0; j < n; j++){
           
           cin >> x;
           v1.push_back(x);
       }
       
       for(int j = 0; j < n; j++){
           
           cin >> x;
           v2.push_back(x);
       }
       
       bool b = true;
       
       for(int k = 0; k < n; k++){
           
           if(v1[k] == 'R'){
               
               if(v2[k] != 'R'){
                   
                   b = false;
                   break;
               }
           }else{
               
               if(v2[k] == 'R'){
                   
                   b = false;
                   break;
               }
           }
       }
       
       (b == true) ? cout << "YES\n" : cout << "NO\n";
       
       v1.clear();
       v2.clear();
    }
    
    return 0;
}