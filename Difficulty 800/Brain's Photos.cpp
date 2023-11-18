#include <iostream>

// Master79
// Brain's Photos

using namespace std;

char matriz [110][110];

int main(){
    
    int n, m;
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < m; j++){
            
            cin >> matriz[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < m; j++){
            
            if(matriz[i][j] == 'C' || matriz[i][j] == 'Y' || matriz[i][j] == 'M'){
                
                cout << "#Color";
                return 0;
            }
        }
    }
    
    cout << "#Black&White";
    
    return 0;
}