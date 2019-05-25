#ifndef HEADER_FILE_BARALHO
#define HEADER_FILE_BARALHO
#include "Jogador.h"
#include "Carta.h"
#include "Baralho.h"
#include <vector>

class Baralho{
    private:
        string tipo;
        vector<Carta> cartas;
    
    public:
        void embaralhar();
        void setTipo(string _tipo);
        string getTipo();
};
//
#endif