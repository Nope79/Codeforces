#include <iostream>

// Master79
// Amusing Joke

using namespace std;

int abcdario[30];
int abcdario1[30];

void cubetaString(char x);
void cubetaString1(char x);

int main(){

    string inv;
    getline(cin, inv);

    string anf;
    getline(cin, anf);

    string sd;
    getline(cin,sd);

    for(int i = 0; i < inv.size(); i++){

        char x = inv[i];
        cubetaString(x);
    }

    for(int i = 0; i < anf.size(); i++){

        char x = anf[i];
        cubetaString(x);
    }

    for(int i = 0; i < sd.size(); i++){

        char x = sd[i];
        cubetaString1(x);
    }

    bool a = true;

    if(inv.size() + anf.size() != sd.size()){

        a = false;
    }

    if(a == true){

        for(int i = 0; i <= 25; i++){


            if(abcdario[i] != abcdario1[i]){

                a = false;
                break;
            }
        }
    }else{

        a = false;
    }

    (a == true) ? cout << "YES" : cout << "NO";

    return 0;
}

void cubetaString1(char x){

    if(x == 'a' || x == 'A'){

        abcdario[0]++;
    }

    if(x == 'b' || x == 'B'){

        abcdario[1]++;
    }

    if(x == 'c' || x == 'C'){

        abcdario[2]++;
    }

    if(x == 'd' || x == 'D'){

        abcdario[3]++;
    }

    if(x == 'e' || x == 'E'){

        abcdario[4]++;
    }

    if(x == 'f' || x == 'F'){

        abcdario[5]++;
    }

    if(x == 'g' || x == 'G'){

        abcdario[6]++;
    }

    if(x == 'h' || x == 'H'){

        abcdario[7]++;
    }

    if(x == 'i' || x == 'I'){

        abcdario[8]++;
    }

    if(x == 'j' || x == 'J'){

        abcdario[9]++;
    }

    if(x == 'k' || x == 'K'){

        abcdario[10]++;
    }

    if(x == 'l' || x == 'L'){

        abcdario[11]++;
    }

    if(x == 'm' || x == 'M'){

        abcdario[12]++;
    }

    if(x == 'n' || x == 'N'){

        abcdario[13]++;
    }

    if(x == 'o' || x == 'O'){

        abcdario[14]++;
    }

    if(x == 'p' || x == 'P'){

        abcdario[15]++;
    }

    if(x == 'q' || x == 'Q'){

        abcdario[16]++;
    }

    if(x == 'r' || x == 'R'){

        abcdario[17]++;
    }

    if(x == 's' || x == 'S'){

        abcdario[18]++;
    }

    if(x == 't' || x == 'T'){

        abcdario[19]++;
    }

    if(x == 'u' || x == 'U'){

        abcdario[20]++;
    }

    if(x == 'v' || x == 'V'){

        abcdario[21]++;
    }

    if(x == 'w' || x == 'W'){

        abcdario[22]++;
    }

    if(x == 'x' || x == 'X'){

        abcdario[23]++;
    }

    if(x == 'y' || x == 'Y'){

        abcdario[24]++;
    }

    if(x == 'z' || x == 'Z'){

        abcdario[25]++;
    }
}

void cubetaString(char x){

    if(x == 'a' || x == 'A'){

        abcdario1[0]++;
    }

    if(x == 'b' || x == 'B'){

        abcdario1[1]++;
    }

    if(x == 'c' || x == 'C'){

        abcdario1[2]++;
    }

    if(x == 'd' || x == 'D'){

        abcdario1[3]++;
    }

    if(x == 'e' || x == 'E'){

        abcdario1[4]++;
    }

    if(x == 'f' || x == 'F'){

        abcdario1[5]++;
    }

    if(x == 'g' || x == 'G'){

        abcdario1[6]++;
    }

    if(x == 'h' || x == 'H'){

        abcdario1[7]++;
    }

    if(x == 'i' || x == 'I'){

        abcdario1[8]++;
    }

    if(x == 'j' || x == 'J'){

        abcdario1[9]++;
    }

    if(x == 'k' || x == 'K'){

        abcdario1[10]++;
    }

    if(x == 'l' || x == 'L'){

        abcdario1[11]++;
    }

    if(x == 'm' || x == 'M'){

        abcdario1[12]++;
    }

    if(x == 'n' || x == 'N'){

        abcdario1[13]++;
    }

    if(x == 'o' || x == 'O'){

        abcdario1[14]++;
    }

    if(x == 'p' || x == 'P'){

        abcdario1[15]++;
    }

    if(x == 'q' || x == 'Q'){

        abcdario1[16]++;
    }

    if(x == 'r' || x == 'R'){

        abcdario1[17]++;
    }

    if(x == 's' || x == 'S'){

        abcdario1[18]++;
    }

    if(x == 't' || x == 'T'){

        abcdario1[19]++;
    }

    if(x == 'u' || x == 'U'){

        abcdario1[20]++;
    }

    if(x == 'v' || x == 'V'){

        abcdario1[21]++;
    }

    if(x == 'w' || x == 'W'){

        abcdario1[22]++;
    }

    if(x == 'x' || x == 'X'){

        abcdario1[23]++;
    }

    if(x == 'y' || x == 'Y'){

        abcdario1[24]++;
    }

    if(x == 'z' || x == 'Z'){

        abcdario1[25]++;
    }
}