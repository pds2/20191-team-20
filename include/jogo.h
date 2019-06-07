#ifndef HEADER_FILE_JOGO
#define HEADER_FILE_JOGO
#include "jogador.h"
#include "baralho.h"
#include <stack>

class Jogo{
    private:
        int rounds_Jog1,rounds_Jog2;
        stack<Carta> monte;
    public:
        void adicionaMonte(Carta _carta);
        void atualizaTela(Jogador jog1, Jogador jog2, Baralho bar, string tipoCarta, bool defesa);
        void passaVez(Jogador jog);
        void printVida(Jogador jog1, Jogador jog2);
        void printCartasDefesa(Jogador jog1, Jogador jog2);
        void printCartasAtaque(Jogador jog1, Jogador jog2);
        void printCartasMovimento(Jogador jog1, Jogador jog2);
        void printTelaInicial();
        void printPosicao(Jogador jog1, Jogador jog2);
        void printMensagem(Jogador jog1, string tipoCarta, bool defesa);
        void setRoundJog1(int _round);
        void setRoundJog2(int _round);
        int getRoundJog1();
        int getRoundJog2();
        stack<Carta> getMonte();
};

#endif