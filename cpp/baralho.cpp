#include <iostream>
#include "headers/baralho.h"
#include <stack>

using namespace std;

void Baralho::criarBaralho(){
    int i,j,k,m;
        string organizado[52];
        string cartas[]= {"A","2","3","4","5","6","7","8","9","10","J","Q","K","\0"};
        char naipe[4] = { '&', '#', '@', '$' };
        string baralho[52];
        stack<int> pilha;

        for(i=0; i<4; i++){
            for (j=0; j<13; j++){
                organizado[k] = ""+cartas[j]+""+naipe[i]+"";
                cout << "organizado[" << k <<"] = "+organizado[k]+"" << endl;//debug
                k++;
            }
        }

        for(i=0; i<52; i++){
            baralho[i]= organizado[rand()%52];
            cout << "baralho[" << i <<"] = "+baralho[i]+"" << endl;//debug
        }
};


void Baralho::setTipo(string _tipo){
    this->tipo = _tipo;
};

string Baralho::getTipo(){
    return this->tipo;
};
