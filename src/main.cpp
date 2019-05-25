#include <iostream>
#include "jogo.cpp"
#include "jogador.cpp"
#include "carta.cpp"

int main() {
    Jogador j1,j2;
    Jogo jogo;
    Baralho br;
    Carta monte[10];

    j1.setNaipe("#");
    j2.setNaipe("$");
    j1.setVida(5);
    j2.setVida(7);
    jogo.setRoundJog1(4);
    jogo.setRoundJog2(2);

    jogo.atualizaTela(j1,j2,br,monte);
}