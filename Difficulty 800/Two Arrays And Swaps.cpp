#include <iostream>
#include <vector>
 
// Master79
// Two Arrays And Swaps
 
using namespace std;
 
vector <int> v;
vector <int> v2;

void ordenarMayorMenor(){
 
    int aux;
 
    for(int i = 0; i < v2.size(); i++){
 
        for(int j = 0; j < v2.size() - 1; j++){
 
            if(v2[j] < v2[j + 1]){
 
                aux = v2[j];
                v2[j] = v2[j + 1];
                v2[j + 1] = aux;
            }
        }
    }
}

void ordenarMenorMayor(){
 
    int aux;
 
    for(int i = 0; i < v.size(); i++){
 
        for(int j = 0; j < v.size() - 1; j++){
 
            if(v[j] > v[j + 1]){
 
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}
 
int main(){
 
    int t;
    cin >> t;
 
    int n, k, x;
 
    for(int j = 0; j < t; j++){
    	
    	cin >> n >> k;
    	
    	for(int i = 0; i < n; i++){
    		
    		cin >> x;
    		v.push_back(x);
		}
		
		for(int i = 0; i < n; i++){
    		
    		cin >> x;
    		v2.push_back(x);
		}
    	
    	ordenarMayorMenor();
    	ordenarMenorMayor();
    	
    	int aux = 0;
    	
    	for(int i = 0; i < k; i++){
    		
    		if(v[i] > v2[i]){
    			
    			break;
			}else{
				
				v[i] = v2[i];
			}
		}
		
		int contador = 0;
		
		for(int i = 0; i < v.size(); i++){
			
			contador += v[i];
		}
		
		cout << contador << endl;
 
        v.clear();
        v2.clear();
    }
}