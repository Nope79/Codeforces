#include <iostream>
#include <vector>

// Master79
// Spell Check

using namespace std;

vector <char> v;

void sort();

bool compare();

int main(){

    int t, n;
    char x;

    cin >> t;

    for(int i = 0; i < t; i++){

        cin >> n;

        for(int j = 0; j < n; j++){

            cin >> x;

            v.push_back(x);
        }

        if(n != 5){

            cout << "NO\n";
        }else{

            sort();

            (compare() == true) ? cout << "YES\n" : cout << "NO\n";
        }

        v.clear();
    }

    return 0;
}

void sort(){

    char x;

    for(int i = 0; i < v.size(); i++){

        for(int j = 0; j < v.size() - i - 1; j++){

            if(v[j] > v[j + 1]){

                x = v[j];
                v[j] = v[j + 1];
                v[j + 1] = x;
            }
        }
    }
}

bool compare(){

    if (v[0] == 'T' && v[1] == 'i' && v[2] == 'm' && v[3] == 'r' && v[4] == 'u') return true;

    return false;
}