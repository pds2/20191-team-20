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
        void setValor(int _distancia) override;
        int getDano();
};

#endif
