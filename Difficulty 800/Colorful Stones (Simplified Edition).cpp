#include <iostream>
 
// Master79
// Colorful Stones (Simplified Edition)
 
using namespace std;
 
int main(){
 
    string txt;
    string read;
 
    getline(cin, txt);
    getline(cin, read);
 
    int i = 0;
    int j = 0;
    while(i < txt.size() && j < read.size()){
 
        if(txt[i] == read[j]){
 
            i++;
        }
 
        j++;
    }
 
    cout << i + 1;
 
    return 0;
}