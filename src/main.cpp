#include <iostream>
#include "headers/jogo.h"
#include "headers/jogador.h"
#include "headers/carta.h"

int main() {
    Jogador j1,j2;
    Jogo jogo;
    Baralho br;
    Carta monte[10];

    br.criarBaralho();
    j1.setNome("1");
    j1.setNaipe(j1.nome);
    j2.setNome("2");
    j2.setNaipe(j2.nome);
    j1.setVida(5);
    j2.setVida(7);
    jogo.setRoundJog1(4);
    jogo.setRoundJog2(2);

    jogo.atualizaTela(j1,j2,br,monte);
}
