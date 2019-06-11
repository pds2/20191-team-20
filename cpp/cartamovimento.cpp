#include <iostream>

#include "cartamovimento.h"

using namespace std;

// Método Para setar o valor da carta de movimento de acordo com a distância dos jogadores
void CartaMovimento::setValor(int _distancia){
    string caracter = Carta::getCaracter();
    switch (caracter[0]){
        case 'A':
            if( 1 > _distancia){
                this->qntMovimento = -(1 - _distancia - _distancia);
            }else{
                this->qntMovimento = 1;
            }
        break;
        case '2':
            if( 2 > _distancia){
                this->qntMovimento = -(2 - _distancia - _distancia);
            }else{
                this->qntMovimento = 2;
            }
        break;
        case '3':
            if( 3 > _distancia){
                this->qntMovimento = -(3 - _distancia - _distancia);
            }else{
                this->qntMovimento = 3;
            }
        break;
        case '4':
            if( 4 > _distancia){
                this->qntMovimento = -(4 - _distancia - _distancia);
            }else{
                this->qntMovimento = 4;
            }
        break;
        case '5':
            if( 5 > _distancia){
                this->qntMovimento = -(5 - _distancia - _distancia);
            }else{
                this->qntMovimento = 5;
            }
    }
}

int CartaMovimento::getMovimento(){
    return this->qntMovimento;
}

CartaMovimento::CartaMovimento(string caracter, string naipe){
    this->setNaipe(naipe);
    this->setCaracter(caracter);
}