#include <iostream>

#include "cartaataque.h"

using namespace std;

void CartaAtaque::setValor(int _distancia){
    string caracter = Carta::getCaracter();
    switch (caracter[0]){
        case 'Q':
            if(_distancia == 0){
                this->qntDano = 2;
            }else if(_distancia == 1){
                this->qntDano = 1;
            }
        break;
        case 'K':
            if(_distancia == 2){
                this->qntDano = 2;
            }else if(_distancia == 3){
                this->qntDano = 1;
            }
        break;
        case 'J':
            if(_distancia == 4){
                this->qntDano = 2;
            }else if(_distancia == 5){
                this->qntDano = 1;
            }
        break;
        case ('1'):
            this->qntDano = 3;
        break;
    }
}

int CartaAtaque::getDano(){
    return this->qntDano;
}

CartaAtaque::CartaAtaque(string simbolo, string naipe){
    this->setCaracter(simbolo);
    this->setNaipe(naipe);
}