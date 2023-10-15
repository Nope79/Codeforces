#include <iostream>

// Master79
// C+=

using namespace std;

int main(){

    int n;

    cin >> n;

    int contador = 0;

    for(int i = 0; i < n; i++){
        
        contador = 0;

        int a, b, x;
        cin >> a >> b >> x;

        if(a > b){
            
            int y = b;

            while(y <= x){
                
               contador ++;
                
               y = a + b;
               b = a;
               a = y;
            }
        }else{

            int y = a;

            while(y <= x){
                
                contador++;

               y = a + b;
               a = b;
               b = y;
            }
        }
        
        cout << contador << endl;
    }

    return 0;
}