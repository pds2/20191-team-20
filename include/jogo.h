#ifndef HEADER_FILE_JOGO
#define HEADER_FILE_JOGO
#include "jogador.h"
#include "baralho.h"

class Jogo{
    private:
        int rounds_Jog1,rounds_Jog2;
    public:
        void atualizaTela(Jogador jog1, Jogador jog2, Baralho bar, Carta monte[]);
        void passaVez(Jogador jog);
        void printVida(Jogador jog1, Jogador jog2);
        void printCartasDefesa(Jogador jog1, Jogador jog2);
        void printCartasAtaque(Jogador jog1, Jogador jog2);
        void printCartasMovimento(Jogador jog1, Jogador jog2, Carta monte[]);
        void setRoundJog1(int _round);
        void setRoundJog2(int _round);
        int getRoundJog1();
        int getRoundJog2();
};

#endif