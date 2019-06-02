#include <iostream>
#include "baralho.h"

using namespace std;

void Baralho::criarBaralho(){
/*
    char naipe[] = {'&','$','#','@'};
    char face[13] = {'A','2','3','4','5','6','7','8','9','10','J','Q','K'};
    int baralho[3][12] = {0};
    srand(time(NULL));
    baralhar(baralho);
    dar(baralho,face,naipe);

    int ordem, lin, col;
    for (ordem = 1; ordem <= 52; ordem++){
        lin = rand() % 4;
        col = rand() % 13;
        while (locBaralho[lin][col] != 0){
           lin = rand() % 4;
           col = rand() % 13;
        }
        locBaralho[lin][col] = ordem;
   }*/
}

void Baralho::embaralhar(){

}

void Baralho::setTipo(string _tipo){
    this->tipo = _tipo;
}

string Baralho::getTipo(){
    return this->tipo;
}
