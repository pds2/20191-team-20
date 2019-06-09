#include <iostream>
#include "jogador.h"
#include "jogo.h"
#include <string>

using namespace std;

void Jogador::setNome(int num_jogador){
    cout << "\n\n\n\n\n\t\t      |   "+to_string(num_jogador)+"º Jogador, digite aqui seu nome (até 8 letras): ";
    cin>>this->nome;
}

void Jogador::setNaipe(){
    cout << "\n\n\t\t      |   "+this->getNome()+", agora escolha seu Naipe Especial:\n\t\t      |\n\t\t      |   & <-Espadas\n\t\t      |   # <-Paus\n\t\t      |   $ <-Ouros\n\t\t      |   @ <-Copas\n\t\t      |" << endl;
    cout << "\t\t      |   Digite aqui: ";
    cin >> this->naipeEspecial;
    system("cls");
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
    if(_posicao >= 0 && _posicao <= 8){
        this->posicaoVetor = _posicao;
    }else if(_posicao > 8){
        this->posicaoVetor = 8;
    }else if(_posicao < 0){
        this->posicaoVetor = 0;
    }
}

void Jogador::adicionaCartaEmMao(vector<Carta> _cartas){
    if(_cartas.size() > 0){
        for(int i=0;i<_cartas.size();i++){
            cartasEmMao.push_back(_cartas[i]);
        }
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

int Jogador::getQntVidas(){
    int cont = 0;
    for(int i=0;i<10;i++){
        if(qntVidas[i] != "X"){
            break;
        }
        cont++;
    }

    return cont;
}

int Jogador::getPosicao(){
    return this->posicaoVetor;
}

vector<Carta> Jogador::getCartasEmMao(){
    return this->cartasEmMao;
}

vector<CartaAtaque> Jogador::getCartasAtaque(){
    vector<CartaAtaque> ataque;
    for(int i=0;i<cartasEmMao.size();i++){
        if(cartasEmMao[i].getCaracter() == "Q" || cartasEmMao[i].getCaracter() == "K"
        || cartasEmMao[i].getCaracter() == "J" || cartasEmMao[i].getCaracter() == "10"){
            CartaAtaque atual = CartaAtaque(cartasEmMao[i].getCaracter(),cartasEmMao[i].getNaipe());
            ataque.push_back(atual);
        }
    }

    return ataque;
}

vector<CartaDefesa> Jogador::getCartasDefesa(){
    vector<CartaDefesa> defesa;
    for(int i=0;i<cartasEmMao.size();i++){
        if(cartasEmMao[i].getCaracter() == "8" || cartasEmMao[i].getCaracter() == "7"
        || cartasEmMao[i].getCaracter() == "9" || cartasEmMao[i].getCaracter() == "6"){
            CartaDefesa atual = CartaDefesa(cartasEmMao[i].getCaracter(),cartasEmMao[i].getNaipe());
            defesa.push_back(atual);
        }
    }

    return defesa;
}

vector<CartaMovimento> Jogador::getCartasMovimento(){
    vector<CartaMovimento> movimento;
    for(int i=0;i<cartasEmMao.size();i++){
        if(cartasEmMao[i].getCaracter() == "A" || cartasEmMao[i].getCaracter() == "2"
        || cartasEmMao[i].getCaracter() == "3" || cartasEmMao[i].getCaracter() == "4"
        || cartasEmMao[i].getCaracter() == "5"){
            CartaMovimento atual = CartaMovimento(cartasEmMao[i].getCaracter(),cartasEmMao[i].getNaipe());
            movimento.push_back(atual);
        }
    }

    return movimento;
}



