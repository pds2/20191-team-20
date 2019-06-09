#ifndef HEADER_FILE_CARTATAQUE
#define HEADER_FILE_CARTATAQUE
#include <iostream>
#include "carta.h"

using namespace std;

class CartaAtaque : public Carta{
    private:
        int qntDano;
        int tipoAtaque;
    public:
        CartaAtaque(string simbolo, string naipe);
        void setValor(int _distancia) override;
        int getDano();
};

#endif
