#ifndef HEADER_FILE_BARALHO
#define HEADER_FILE_BARALHO
#include "jogador.h"
#include "carta.h"
#include "baralho.h"
#include <vector>

class Baralho{
    private:
        string tipo;
        vector<Carta> cartas;
    public:
        void criarBaralho();
        void embaralhar();
        void setTipo(string _tipo);
        string getTipo();
        vector<Carta> getBaralho();
        void desempilha();
        Carta getTopo();
};

#endif
