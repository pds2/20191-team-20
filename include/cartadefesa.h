#ifndef HEADER_FILE_CARTADEFESA
#define HEADER_FILE_CARTADEFESA
#include <iostream>
#include "Carta.h"

using namespace std;

class CartaDefesa : public Carta{
    private:
        int qntDefesa;
        int tipoDefesa;
    public:
        void executaFuncao() override;
        int getDefesa();
};

#endif