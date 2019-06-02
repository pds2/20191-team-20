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
        int executaFuncao(int _distancia) override;
        int getDano();
};

#endif
