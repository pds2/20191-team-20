#include <iostream>
#include "jogo.cpp"
#include "jogador.cpp"
#include "carta.cpp"
#include "baralho.cpp"
#include<tchar.h>

int main() {
    _tsetlocale(LC_ALL, _T("portuguese"));
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
