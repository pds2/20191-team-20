#include <iostream>
#include "jogo.cpp"
#include "jogador.cpp"
#include "carta.cpp"
#include "baralho.cpp"
#include "cartaataque.cpp"
#include "cartadefesa.cpp"
#include "cartamovimento.cpp"

int main() {
    Jogador j1,j2;
    Jogo jogo;
    Baralho br;
    Carta monte[10];


    br.criarBaralho();
    br.embaralhar();


    
    j1.setNome("1");
    j1.setNaipe(j1.getNome());
    j2.setNome("2");
    j2.setNaipe(j2.getNome());
    j1.setVida(5);
    j2.setVida(7);
    jogo.setRoundJog1(4);
    jogo.setRoundJog2(2);

    jogo.atualizaTela(j1,j2,br,monte);
    

    system("pause");

    vector<Carta> adicionar;
    vector<Carta> adicionar2;
    for(int i=0;i<18;i++){
        adicionar.push_back(br.getTopo());
        br.desempilha();
    }

    for(int i=0;i<5;i++){
        adicionar2.push_back(br.getTopo());
        br.desempilha();
    }

    j1.adicionaCartaEmMao(adicionar);
    j2.adicionaCartaEmMao(adicionar2);
    jogo.atualizaTela(j1,j2,br,monte);
    
}
