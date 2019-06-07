#include <iostream>
#include "jogo.cpp"
#include "jogador.cpp"
#include "carta.cpp"
#include "baralho.cpp"
#include "cartaataque.cpp"
#include "cartadefesa.cpp"
#include "cartamovimento.cpp"
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    Jogador j1,j2;
    Jogo jogo;
    Baralho br;


    br.criarBaralho();
    br.embaralhar();


    jogo.printTelaInicial();
    j1.setNome(1);
    j1.setNaipe();
    j2.setNome(2);
    j2.setNaipe();
    j1.setVida(5);
    j2.setVida(7);
    j1.setPosicao(2);
    j2.setPosicao(8);
    jogo.setRoundJog1(4);
    jogo.setRoundJog2(2);
    
    jogo.adicionaMonte(br.getBaralho()[2]);
    //jogo.getMonte().;

    jogo.atualizaTela(j1,j2,br, "Ataque", false);
    

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

    jogo.adicionaMonte(br.getBaralho()[1]);
    jogo.atualizaTela(j1,j2,br, "Defesa", true);
    
}
