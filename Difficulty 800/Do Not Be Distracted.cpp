#include <iostream>
#include <vector>

// Master79
// Do Not Be Distracted!

using namespace std;

void rellenar(int task);

bool taskOrder();

vector <char> v;

int main(){

	int t;
	cin >> t;

	for(int i = 0; i < t; i++){

		int task;
		cin >> task;

		rellenar(task);

		(taskOrder() == true) ? cout << "YES\n" : cout << "NO\n";

		v.clear();
	}

	return 0;
}

void rellenar(int task){

	for(int i = 0; i < task; i++){

		char x;
		cin >> x;

		if(i == 0){

			v.push_back(x);

		}else{

			if(x != v[v.size() - 1]){

				v.push_back(x);
			}
		}
	}
}

bool taskOrder(){

	for(int i = 0; i < v.size() - 1; i++){

		for(int j = i + 1; j < v.size(); j++){

			if(v[i] == v[j]){

				return false;
			}
		}
	}

	return true;
}