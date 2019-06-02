#include <iostream>
#include "baralho.h"
#include "carta.h"
#include <vector>
#include <set>
#include <stdlib.h>
#include<time.h>

using namespace std;

void Baralho::criarBaralho(){

    vector<Carta> baralho;
    string cartas[13]= {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    string naipe[4] = { "&","#","@","$"};

    for(int i=0; i<4; i++){
        for (int j=0; j<13; j++){
            Carta atual;
            atual.setNaipe(naipe[i]);
            atual.setCaracter(cartas[j]);
            baralho.push_back(atual);
        }
    }

    this->cartas = baralho;
};

void Baralho::embaralhar(){
    vector<Carta> antigo = cartas;
    vector<Carta> novo;
    set<int> posicoes;
    srand(time(NULL));
    int contador = 0;

    while( contador != 52){
        int valor = rand() % 52;
        if(posicoes.count(valor)==0){
            novo.push_back(antigo[valor]);
            contador++;
            posicoes.insert(valor);
        }
    }

    this->cartas = novo;
    
}

void Baralho::setTipo(string _tipo){
    this->tipo = _tipo;
};

string Baralho::getTipo(){
    return this->tipo;
};

vector<Carta> Baralho::getBaralho(){
    return this->cartas;
}

void Baralho::desempilha(){
    this->cartas.pop_back();
}

Carta Baralho::getTopo(){
    int tamanho = this->cartas.size();
    return this->cartas[tamanho-1];
}
