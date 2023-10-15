#include <iostream>
#include <stdio.h>

// Master79
// I Wanna be the Guy

int array[110];

using namespace std;

int main(){

	int n;
	scanf("%d", &n);

	bool c = true;

	int a;
	cin >> a;

	for(int i = 0; i < a; i++){

        int x;
        cin >> x;

        array[x]++;
	}

	cin >> a;

	for(int i = 0; i < a; i++){

        int x;
        cin >> x;

        array[x]++;
	}

	for(int i = 1; i <= n; i++){

		if(array[i] == 0){

			c = false;
			break;
		}
	}

	(c == true) ? cout << "I become the guy." : cout << "Oh, my keyboard!";

	return 0;
}