#ifndef HEADER_FILE_JOGADOR
#define HEADER_FILE_JOGADOR
#include <iostream>
#include <vector>
#include "carta.h"

using namespace std;

class Jogador{
    private:
        string nome;
        string naipeEspecial;
        string qntVidas[10];
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
        string* getVida();
        int getPosicao();
        vector<Carta> getCartasEmMao();

};

#endif