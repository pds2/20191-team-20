#include <iostream>
#include "jogador.h"

using namespace std;

void Jogador::setNome(string _nome){
    this->nome = _nome;
}

void Jogador::setNaipe(string _naipe){
    this->naipeEspecial = _naipe;
}

void Jogador::setVida(int _vida){
    this->qntVidas = _vida;
}

void Jogador::setPosicao(int _posicao){
    this->posicaoVetor = _posicao;
}

void Jogador::adicionaCartaEmMao(vector<Carta> _cartas){
    if(_cartas.size() > 0){
        for(int i=0;i<_cartas.size();i++){
            cartasEmMao.push_back(_cartas[i]);
        }
    }
}




