#include <iostream>
#include "carta.h"

using namespace std;

void Carta::setNaipe(string _naipe){
    this->naipe = _naipe;
}

void Carta::setCaracter(string _caracter){
    this->caracter = _caracter;
}

void Carta::setTipoCarta(string _tipo){
    this->tipoCarta = _tipo;
}

string Carta::getNaipe(){
    return this->naipe;
}

string Carta::getCaracter(){
    return this->caracter;
}

string Carta::getTipoCarta(){
    return this->tipoCarta;
}

void Carta::setValor(int _distancia){
    // Não é utilizado mas é necessário declará-lo visto que as classes que herdam de carta
    // utilizam dessa função e a sobrescrevem sendo polimórficas.
}

