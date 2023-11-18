#include <iostream>
#include <vector>

// Master79
// Equal Candies

using namespace std;

vector <int> v;

void sortBoxes();

int eatCandies();

int main(){

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){

        int n;
        cin >> n;

        for(int j = 0; j < n; j++){

            int x;
            cin >> x;

            v.push_back(x);
        }

        sortBoxes();
        cout << eatCandies() << endl;

        v.clear();
    }

    return 0;
}

void sortBoxes(){

    int aux = 0;

    for(int i = 0;i < v.size(); i++){

        for(int j = 0; j < v.size() - i - 1; j++){

            if(v[j] > v[j + 1]){

                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

int eatCandies(){

    int eat = 0;

    for(int i = 1; i < v.size(); i++){

        eat += (v[i] - v[0]);
    }

    return eat;
}