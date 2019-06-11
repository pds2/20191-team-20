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
        void atualizaTela(Jogador &jog1, Jogador &jog2, Baralho bar, string tipoCarta, bool defesa, bool mensagem_customizada, string mensagem, bool jog);
        void printVida(Jogador jog1, Jogador jog2);
        void printCartasDefesa(Jogador &jog1, Jogador &jog2);
        void printCartasAtaque(Jogador &jog1, Jogador &jog2);
        void printCartasMovimento(Jogador &jog1, Jogador &jog2);
        void printTelaInicial();
        void printPosicao(Jogador jog1, Jogador jog2);
        void printMensagem(Jogador jog1, string tipoCarta, bool defesa);
        void printMensagem(string mensagem);
        void setRoundJog1(int _round);
        void setRoundJog2(int _round);
        void pegaBaralho(Jogador *jog1, Baralho *br);
        void realizaMovimento(Jogador *j1, Jogador *j2, CartaMovimento _movimento, bool jog1);
        pair<bool,pair<int,string>> validaAtaque(CartaAtaque _ataque, Jogador *j1, Jogador &j2);
        pair<bool,int> validaDefesa(Jogador *j1, Jogador &j2,CartaDefesa _defesa, string caracter_ataque);
        bool validaMovimento(CartaMovimento _movimento, Jogador *j1, Jogador *j2, bool jog1);
        void distribuiCartas(Jogador &j1, Jogador &j2, Baralho &br);
        Baralho misturaBaralhos(Baralho b1, Baralho b2);
        void limpaTela();
        int getRoundJog1();
        int getRoundJog2();
        stack<Carta> getMonte();
};

#endif