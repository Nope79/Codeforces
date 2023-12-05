#include <iostream>
#include <set>
 
// Master79
// Squares and Cubes
 
using namespace std;
 
int main(){
    
    int t, n;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        
        cin >> n;
        
        set <int> s;
        
        int k = 1;
        
        while((k * k) <= n){
            
            s.insert(k * k);
            
            k++;
        }
        
        k = 1;
        
        while((k * k * k) <= n){
            
            s.insert(k * k * k);
            
            k++;
        }
        
        cout << s.size() << endl;
        
        s.clear();
    }
    
    return 0;
}
