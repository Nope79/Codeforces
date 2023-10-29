#include <iostream>

// Master79
// Presents

using namespace std;

int main(){
    
    int array[110];

    int x, y;
    cin >> x;

    for(int i = 1; i <= x; i++){
        
        cin >> y;
        
        array[y] = i;
    }

    for(int i = 1; i <= x; i++){

        cout << array[i] << " ";
    }

    return 0;
}