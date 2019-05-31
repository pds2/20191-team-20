#ifndef HEADER_FILE_CARTAMOVIMENTO
#define HEADER_FILE_CARTAMOVIMENTO
#include <iostream>
#include "carta.h"

using namespace std;

class CartaMovimento : public Carta{
    private:
        int qntMovimento;
    public:
        void executaFuncao();
        int getMovimento();
};

#endif
