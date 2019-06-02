#include <iostream>

#include "cartaataque.h"
#include "jogo.h"

using namespace std;

int CartaAtaque::executaFuncao(int _distancia){
    string caracter = getCaracter();
    switch (caracter[0]){
        case 'Q':
            

    }
}

// Lembrar, pensei o seguinte :
// O método executa função terá o retorno int que servirá para retornar o dano 
// no caso da carta de ataque, a defesa no caso da carta de defesa e o valor a ser moveimentado
// no caso da carta de movimento
// o parametro int será a distancia entre os dois jogadores que será verificado pela classe jogo
// e chamado antes de chamar o executa funcao na classe main.

int CartaAtaque::getDano(){
    return this->qntDano;
}
