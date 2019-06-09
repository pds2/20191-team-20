#include <iostream>

#include "cartadefesa.h"

using namespace std;

void CartaDefesa::setValor(int _distancia){
    string caracter = Carta::getCaracter();
    switch (caracter[0]){
        case '8':
            if(_distancia == 0){
                this->qntDefesa = 2;
            }else if(_distancia == 1){
                this->qntDefesa = 1;
            }
        break;
        case '7':
            if(_distancia == 2){
                this->qntDefesa = 2;
            }else if(_distancia == 3){
                this->qntDefesa = 1;
            }
        break;
        case '9':
            if(_distancia == 4){
                this->qntDefesa = 2;
            }else if(_distancia == 5){
                this->qntDefesa = 1;
            }
        break;
        case '6':
            this->qntDefesa = 3;
        break;
    }
}

int CartaDefesa::getDefesa(){
    return this->qntDefesa;
}

CartaDefesa::CartaDefesa(string caracter, string naipe){
    this->setCaracter(caracter);
    this->setNaipe(naipe);
}
