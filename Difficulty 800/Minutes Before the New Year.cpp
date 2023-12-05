#include <iostream>
 
// Master79
// Minutes Before the New Year
 
using namespace std;
 
int main(){
    
    int t, horas, minutos;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        
        cin >> horas >> minutos;
        
        int hrest = 23 - horas;
        int mrest = 60 - minutos;
        
        cout << (hrest * 60) + mrest << endl;
    }
 
    return 0;
}