#include <iostream>

// Master79
// Linear Keyboard

using namespace std;

int main(){
    
    int t;
    cin >> t;
    string abc, palabra;
    
    for(int z = 0; z < t; z++){
        
        cin >> abc >> palabra;
        
        int pasos = 0;
        int pos = 0;
        
        for(int i = 0; i < abc.size(); i++){
            
            if(palabra[0] == abc[i]){
                
                pos = i;
                break;
            }
        }
        
        for(int i = 1; i < palabra.size(); i++){
            
            int cont = 0;
            bool x = false;
            int aux = pos;
            
            for(int j = pos; j >= 0; j--){
                
                if(palabra[i] == abc[j]){
                    
                    x = true;
                    break;
                }else{
                    
                    cont++;
                    aux--;
                }
            }
            
            if(x == true){
                
                pos = aux;
                pasos+=cont;
            }else{
                
                cont = 0;
                
                for(int j = pos; j < abc.size(); j++){
                    
                    if(palabra[i] == abc[j]){
                        break;
                    }else{
                    
                        cont++;
                        pos++;
                    }
                }
                
                pasos+=cont;
            }
        }
        
        cout << pasos << endl;
    }
    
    return 0;
}