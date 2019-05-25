#ifndef HEADER_FILE_CARTATAQUE
#define HEADER_FILE_CARTATAQUE
#include <iostream>
#include "Carta.h"

using namespace std;

class CartaAtaque : public Carta{
    private:
        int qntDano;
        int tipoAtaque;
    public:
        void executaFuncao() override;
        int getDano();
};

#endif