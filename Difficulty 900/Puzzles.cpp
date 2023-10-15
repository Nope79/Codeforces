#include <iostream>
#include <vector>

// Master79
// Puzzles

using namespace std;

int main()
{
    vector <int> v;
    
    int n, m;
    
    cin >> n >> m;
    
    for(int i = 0; i < m; i++){
        
        int y;
        cin >> y;
        
        v.push_back(y);
    }
    
    int aux = 0;
    
    for(int i = 0; i < m; i++){
        
        for(int j = 0; j < m - 1; j++){
            
            if(v[j] > v[j + 1]){
                
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
    
    int minDis = 10000;
    
    for(int i = 0; i <= v.size() - n; i++){
        
        if((v[i + n - 1] - v[i]) < minDis){
            
            minDis = v[i + n - 1] - v[i];
        }
    }
    
    cout << minDis;
    
    return 0;
}