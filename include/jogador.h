#ifndef HEADER_FILE
#define HEADER_FILE
#include <iostream>
#include <vector>
#include "Carta.h"

using namespace std;

class Jogador{
    private:
        string nome;
        string naipeEspecial;
        int qntVidas;
        int posicaoVetor;
        vector<Carta> cartasEmMao;
    public:
        void setNome(string _nome);
        void setNaipe(string _naipe);
        void setVida(int _vida);
        void setPosicao(int _posicao);
        void adicionaCartaEmMao(vector<Carta> _cartas);
        void removeCartaEmMao(vector<Carta> _cartas);
        string getNome();
        string getNaipeEsp();
        int getVida();
        int getPosicao();
        vector<Carta> getCartasEmMao();

};

#endif