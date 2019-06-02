#ifndef HEADER_FILE_CARTADEFESA
#define HEADER_FILE_CARTADEFESA
#include <iostream>
#include "carta.h"

using namespace std;

class CartaDefesa : public Carta{
    private:
        int qntDefesa;
        int tipoDefesa;
    public:
        int executaFuncao(int _distancia) override;
        int getDefesa();
};
//
#endif
