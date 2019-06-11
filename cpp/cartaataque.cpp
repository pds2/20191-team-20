#include <iostream>

#include "cartaataque.h"

using namespace std;

// Metodo responsável por setar o valor da defesa da carta de acordo com a distancia e com seu respectivo símbolo
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

//Get Dano
int CartaAtaque::getDano(){
    return this->qntDano;
}

//Construtor 
CartaAtaque::CartaAtaque(string simbolo, string naipe){
    this->setCaracter(simbolo);
    this->setNaipe(naipe);
}