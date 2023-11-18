#include <iostream>

// Master79
// Where's the Bishop?

using namespace std;

char mat[10][10];

void llenar(){
    
    for(int i = 1; i <= 8; i++){
        
        for(int j = 1; j<= 8; j++){
            
            cin >> mat[i][j];
        }
    }
}

void buscar(){
    
    for(int i = 2; i < 8; i++){
        
        for(int j = 2; j < 8; j++){
            
            if(mat[i][j] == '#'){
                
                if(mat[i - 1][j - 1] == '#' && mat[i + 1][j + 1] == '#' && mat[i - 1][j + 1] == '#' && mat[i + 1][j - 1] == '#'){
                    cout << i << " " << j << endl;
                }
            }
        }
    }
}

int main(){
    
   int t;
   cin >> t;
   
   for(int i = 0; i < t; i++){
        
      llenar();
      buscar();
    }
   
    return 0;
}