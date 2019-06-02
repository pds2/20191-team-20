#include <iostream>
#include "jogador.h"
#include "jogo.h"

using namespace std;

void Jogador::setNome(string _nome){
    cout << "\n\n\n\n";
    cout << "                      ########            ##   ##          ##      ||                    "<< endl;
    cout << "                      ##        ##   ##   ##  ##           ##  @@  ||                    "<< endl;
    cout << "                      ######     ## ##    ## ##   @@@@     ##      ||||)   @   @    #### "<< endl;
    cout << "                      ##          ###     ####   @    @    ##  $$  ||  |)  @   @   ##    "<< endl;
    cout << "                      ##         ## ##    ## ##  @    @@   ##  $$  ||  /)  @   @   ##    "<< endl;
    cout << "                      ########  ##   ##   ##  ##  @@@@  @  ##  $$  ||//)    @@@ @  ##    "<< endl;
    cout << "\n\n\n\n\n\t\t      |   "+_nome+"º Jogador, digite aqui seu nome (até 8 letras): ";
    cin >> nome;
    this->nome;
}

void Jogador::setNaipe(string _naipe){
    cout << "\n\n\t\t      |   "+_naipe+", agora escolha seu Naipe Especial:\n\t\t      |\n\t\t      |   & <-Espadas\n\t\t      |   # <-Paus\n\t\t      |   $ <-Ouros\n\t\t      |   @ <-Copas\n\t\t      |" << endl;
    cout << "\t\t      |   Digite aqui: ";
    cin >> naipeEspecial;
    system("cls");
    this->naipeEspecial;
}

void Jogador::setVida(int _vida){
    for(int i=0;i<10;i++){
        qntVidas[i] = " ";
    }
    for(int i=0;i<_vida;i++){
        qntVidas[i] = "X";
    }
}

void Jogador::setPosicao(int _posicao){
    this->posicaoVetor = _posicao;
}

void Jogador::adicionaCartaEmMao(vector<Carta> _cartas){
    if(_cartas.size() > 0){
        for(int i=0;i<_cartas.size();i++){
            cartasEmMao.push_back(_cartas[i]);
        }
        cout<<"Cartas adicionadas !";
    }else{
        cout<<" Não é possível adicionar nenhuma carta !";
    }
}

void Jogador::removeCartaEmMao(vector<Carta> _cartas){
    if(_cartas.size() > 0 && cartasEmMao.size() > 0){
        int posicoes[20],TAM=0;
        // For para iterar em cima das cartas que serão removidas e buscá-las na mão do jogador.
        for(int k=0;k<_cartas.size();k++){
            for(int i=0;i<cartasEmMao.size();i++){
                if(_cartas[k].getNaipe() == cartasEmMao[i].getNaipe()
                && _cartas[k].getCaracter() == cartasEmMao[i].getCaracter()){
                    posicoes[TAM] = i;
                    TAM++;
                }
            }
        }
        // for para acertar as posicoes a serem removidas a cada remoção.
        for(int j=0;j<TAM;j++){
            cartasEmMao.erase(cartasEmMao.begin()+posicoes[j]);
            for(int l=j+1;l<TAM;l++){
                if(posicoes[l] > posicoes[j]){
                    posicoes[l] -= 1;
                }
            }
        }
        cout<<" Carta(s) removida(s) com sucesso !";
    }else{
        cout<<"Não é possível remover nenhuma carta ou o jogador não possui nenhuma carta em mãos ! ";
    }

}

string Jogador::getNome(){
    return this->nome;
}

string Jogador::getNaipeEsp(){
    return this->naipeEspecial;
}

 string* Jogador::getVida(){
    return this->qntVidas;
}

int Jogador::getPosicao(){
    return this->posicaoVetor;
}

vector<Carta> Jogador::getCartasEmMao(){
    return this->cartasEmMao;
}



