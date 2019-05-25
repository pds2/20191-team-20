#ifndef HEADER_FILE_JOGO
#define HEADER_FILE_JOGO
#include "Jogador.h"
#include "Carta.h"
#include "Baralho.h"

class Jogo{
    public:
        void atualizaTela(Jogador jog1, Jogador jog2, Baralho bar, Carta monte[]);
        void passaVez(Jogador jog);
};

#endif