#include <iostream>
#include <string>
#include "jogo.h"
#include "carta.h"

using namespace std;

void Jogo::atualizaTela(Jogador jog1, Jogador jog2, Baralho bar, Carta monte[]){

string Linha1 =  "1\t\t\t\t\t   ___                                   ___";
string Linha2 =  "2      "+jog1.getNome()+"\t\t\t   Rounds |_"+to_string(this->getRoundJog1())+"_|            esKalibur            |_"+to_string(this->getRoundJog2())+"_| Rounds\t\t\t"+jog2.getNome()+"";
string Linha3 =  "3      _______________________________________           ____________            _______________________________________ ";
string Linha4 =  "4     |   |   |   |   |   |   |   |   |   |   |         |   BARALHO  |          |   |   |   |   |   |   |   |   |   |   |";
string Linha6 =  "6     |___|___|___|___|___|___|___|___|___|___|         |   |   "+bar.getTopo().getNaipe()+"|   |          |___|___|___|___|___|___|___|___|___|___|";
string Linha7 =  "7       1   2   3   4   5   6   7   8   9   10          |   | "+bar.getTopo().getCaracter()+"  |   |           10   9   8   7   6   5   4   3   2   1  ";
string Linha8 =  "8                                                       |   |    |   |                                                   ";
string Linha9 =  "9      _______________________________________          |   |"+bar.getTopo().getNaipe()+"___|   |          ________________________________________ ";
string Linha10 = "10    |                                       |         |            |         |                                        |";
string Linha11 = "11    |                Defesa                 |         |__*Espaço*__|         |                 Defesa                 |";
string Linha12 = "12    |   __________________________________  |                                |   __________________________________   |";
string Linha14 = "14    |    1    2    3    4    5    6     7   |          ____________          |    1    2    3    4    5    6    7     |";
string Linha15 = "15    |                                       |         |    MESA    |         |                                        |";
string Linha16 = "16    |               Movimento               |         |    ____    |         |                Movimento               |";
string Linha17 = "17    |   __________________________________  |         |   |   #|   |         |   __________________________________   |";
string Linha19 = "19    |     1    2    3    4    5    6    7   |         |   |    |   |         |    1    2    3    4    5    6    7     |";
string Linha20 = "20    |                                       |         |   |#___|   |         |                                        |";
string Linha21 = "21    |                Ataque                 |         |            |         |                 Ataque                 |";
string Linha22 = "22    |   __________________________________  |         |____________|         |   ___________________________________  |";
string Linha24 = "24    |      1    2    3    4    5    6    7  |     ______________________     |    1    2    3    4    5    6    7     |";
string Linha25 = "25    |_______________________________________|    | MENSAGEM AO USUÁRIO  |    |________________________________________|";
string Linha26 = "26     ____________________________________________|                      |_____________________________________________ ";
string Linha27 = "27    |                                                                                                                 |";
string Linha28 = "28     \t\t  "+jog1.getNome()+": Escolha uma carta 'Movimento' ou aperte 'espaço' para colher uma carta do baralho.";
string Linha29 = "29    |_________________________________________________________________________________________________________________|";
string Linha30 = "30     ___________________________________                                             _________________________________ ";
string Linha31 = "31    |             Ataques               |             Campo de Batalha              |             Defesas             |";
string Linha32 = "32    |                                   |      _______________________________      |                                 |";
string Linha33 = "33    | Q  = Faca   - Perto     = 2 ou 1  |     |   |   |   |   |   |   |   |   |     | 8 = Armadura- Perto   =-2 ou -1 |";
string Linha34 = "34    | K  = Espada - Médio     = 2 ou 1  |     | $ |   |   |   |   |   |   | # |     | 7 = Espada  - Médio   =-2 ou -1 |";
string Linha35 = "35    | J  = Lança  - Longe     = 2 ou 1  |     |___|___|___|___|___|___|___|___|     | 9 = Escudo  - Longe   =-2 ou -1 |";
string Linha36 = "36    | 10 = Magia  - Qualquer  = 3 ou 4  |       1   2   3   4   5   6   7   8       | 6 = Desvio  - Qualquer=-3 ou -4 |";
string Linha37 = "37    |                                   |                                           | *Duas  = 1 ataque proporcional  |";
string Linha38 = "38    |            esKalibur              |         _________________________         |                                 |";
string Linha39 = "39    |  K do mesmo Naipe do Jogador = 5  |        |         Naipes          |        |            esKalibur            |";
string Linha40 = "40    |___________________________________|        | & - Espadas   # - Paus  |        | 7 do mesmo Naipe do Jogador =-5 |";
string Linha41 = "41                                                 | $ - Ouros     @ - Copas |        |_________________________________|";
string Linha42 = "42                                                 |_________________________|                                           ";


cout << Linha1 << endl;
cout << Linha2 << endl;
cout << Linha3 << endl;
cout << Linha4 << endl;
printVida(jog1,jog2);
cout << Linha6 << endl;
cout << Linha7 << endl;
cout << Linha8 << endl;
cout << Linha9 << endl;
cout << Linha10 << endl;
cout << Linha11 << endl;
cout << Linha12 << endl;
printCartasDefesa(jog1,jog2);
cout << Linha14 << endl;
cout << Linha15 << endl;
cout << Linha16 << endl;
cout << Linha17 << endl;
printCartasMovimento(jog1,jog2,monte);
cout << Linha19 << endl;
cout << Linha20 << endl;
cout << Linha21 << endl;
cout << Linha22 << endl;
printCartasAtaque(jog1,jog2);
cout << Linha24 << endl;
cout << Linha25 << endl;
cout << Linha26 << endl;
cout << Linha27 << endl;
cout << Linha28 << endl;
cout << Linha29 << endl;
cout << Linha30 << endl;
cout << Linha31 << endl;
cout << Linha32 << endl;
cout << Linha33 << endl;
cout << Linha34 << endl;
cout << Linha35 << endl;
cout << Linha36 << endl;
cout << Linha37 << endl;
cout << Linha38 << endl;
cout << Linha39 << endl;
cout << Linha40 << endl;
cout << Linha41 << endl;
cout << Linha42 << endl;

}

void Jogo::passaVez(Jogador jog){

}

void Jogo::printVida(Jogador jog1, Jogador jog2){

    string Linha5 =  "5     | "+jog1.getVida()[0]+" | "+jog1.getVida()[1]+" | " +jog1.getVida()[2]+
    " | " +jog1.getVida()[3]+ " | " +jog1.getVida()[4]+ " | " +jog1.getVida()[5]+
    " | " +jog1.getVida()[6]+ " | " +jog1.getVida()[7]+ " | " +jog1.getVida()[8]+ " | " +jog1.getVida()[9]+ " |         |    ____    |          "+
    "| " +jog2.getVida()[9]+ " | " +jog2.getVida()[8]+ " | " +jog2.getVida()[7]+ " | " +jog2.getVida()[6]+
    " | " +jog2.getVida()[5]+ " | " +jog2.getVida()[4]+ " | " +jog2.getVida()[3]+ " | " +jog2.getVida()[2]+
    " | " +jog2.getVida()[1]+ " | " +jog2.getVida()[0]+ " |";
    cout<< Linha5<<endl;
}

void Jogo::printCartasDefesa(Jogador jog1, Jogador jog2){
    string Linha13;
    if(jog1.getCartasDefesa().size() == 0 && jog2.getCartasDefesa().size() == 0){
         Linha13 = "13    |  [_NN_|_NN_|_NN_|_NN_|_NN_|_NN_|_NN_] |                                |  [_NN_|_NN_|_NN_|_NN_|_NN_|_NN_|_NN_]  |";
    }else if(jog1.getCartasDefesa().size() != 0 && jog2.getCartasDefesa().size() != 0){
        string vetor[7],vetor2[7];
        for(int k=0;k<7;k++){
            vetor[k] = "NN";
            vetor2[k] = "NN"; 
        }
        for(int i=0;i<jog2.getCartasDefesa().size();i++){
            vetor[i] = (jog2.getCartasDefesa()[i].getCaracter()+jog2.getCartasDefesa()[i].getNaipe());
        }
        for(int j=0;j<jog1.getCartasDefesa().size();j++){
            vetor2[j] = (jog1.getCartasDefesa()[j].getCaracter()+jog1.getCartasDefesa()[j].getNaipe());
        }
        Linha13 = "13    |  [_"+vetor2[0]+"_|_"+vetor2[1]+"_|_"+vetor2[2]+"_|_"+vetor2[3]+"_|_"+vetor2[4]+"_|_"+vetor2[5]+"_|_"+vetor2[6]+"_] |                                |  [_"+vetor[0]+"_|_"+vetor[1]+"_|_"+vetor[2]+"_|_"+vetor[3]+"_|_"+vetor[4]+"_|_"+vetor[5]+"_|_"+vetor[6]+"_]  |";
    }else if(jog2.getCartasDefesa().size() != 0){
        string vetor[7];
        for(int k=0;k<7;k++){
            vetor[k] = "NN"; 
        }
        for(int i=0;i<jog2.getCartasDefesa().size();i++){
            vetor[i] = (jog2.getCartasDefesa()[i].getCaracter()+jog2.getCartasDefesa()[i].getNaipe());
        }
        Linha13 = "13    |  [_NN_|_NN_|_NN_|_NN_|_NN_|_NN_|_NN_] |                                |  [_"+vetor[0]+"_|_"+vetor[1]+"_|_"+vetor[2]+"_|_"+vetor[3]+"_|_"+vetor[4]+"_|_"+vetor[5]+"_|_"+vetor[6]+"_]  |";
    }else{
        string vetor[7];
        for(int k=0;k<7;k++){
            vetor[k] = "NN"; 
        }
        for(int i=0;i<jog1.getCartasDefesa().size();i++){
            vetor[i] = (jog1.getCartasDefesa()[i].getCaracter()+jog1.getCartasDefesa()[i].getNaipe());
        }
        Linha13 = "13    |  [_"+vetor[0]+"_|_"+vetor[1]+"_|_"+vetor[2]+"_|_"+vetor[3]+"_|_"+vetor[4]+"_|_"+vetor[5]+"_|_"+vetor[6]+"_] |                                |  [_NN_|_NN_|_NN_|_NN_|_NN_|_NN_|_NN_]  |";
    }
    cout<<Linha13<<endl;
}

void Jogo::printCartasAtaque(Jogador jog1, Jogador jog2){
    string Linha23;
    if(jog1.getCartasAtaque().size() == 0 && jog2.getCartasAtaque().size() == 0){
         Linha23 = "23    |  [_NN_|_NN_|_NN_|_NN_|_NN_|_NN_|_NN_] |                               |  [_NN_|_NN_|_NN_|_NN_|_NN_|_NN_|_NN_]  |";
    }else if(jog1.getCartasAtaque().size() != 0 && jog2.getCartasAtaque().size() != 0){
        string vetor[7],vetor2[7];
        for(int k=0;k<7;k++){
            vetor[k] = "NN";
            vetor2[k] = "NN"; 
        }
        for(int i=0;i<jog2.getCartasAtaque().size();i++){
            vetor[i] = (jog2.getCartasAtaque()[i].getCaracter()+jog2.getCartasAtaque()[i].getNaipe());
        }
        for(int j=0;j<jog1.getCartasAtaque().size();j++){
            vetor2[j] = (jog1.getCartasAtaque()[j].getCaracter()+jog1.getCartasAtaque()[j].getNaipe());
        }
        Linha23 = "23    |  [_"+vetor2[0]+"_|_"+vetor2[1]+"_|_"+vetor2[2]+"_|_"+vetor2[3]+"_|_"+vetor2[4]+"_|_"+vetor2[5]+"_|_"+vetor2[6]+"_]|                               |  [_"+vetor[0]+"_|_"+vetor[1]+"_|_"+vetor[2]+"_|_"+vetor[3]+"_|_"+vetor[4]+"_|_"+vetor[5]+"_|_"+vetor[6]+"_]  |";
    }else if(jog2.getCartasAtaque().size() != 0){
        string vetor[7];
        for(int k=0;k<7;k++){
            vetor[k] = "NN"; 
        }
        for(int i=0;i<jog2.getCartasAtaque().size();i++){
            vetor[i] = (jog2.getCartasAtaque()[i].getCaracter()+jog2.getCartasAtaque()[i].getNaipe());
        }
        Linha23 = "23    |  [_NN_|_NN_|_NN_|_NN_|_NN_|_NN_|_NN_] |                               |  [_"+vetor[0]+"_|_"+vetor[1]+"_|_"+vetor[2]+"_|_"+vetor[3]+"_|_"+vetor[4]+"_|_"+vetor[5]+"_|_"+vetor[6]+"_]  |";
    }else{
        string vetor[7];
        for(int k=0;k<7;k++){
            vetor[k] = "NN"; 
        }
        for(int i=0;i<jog1.getCartasAtaque().size();i++){
            vetor[i] = (jog1.getCartasAtaque()[i].getCaracter()+jog1.getCartasAtaque()[i].getNaipe());
        }
        Linha23 = "23    |  [_"+vetor[0]+"_|_"+vetor[1]+"_|_"+vetor[2]+"_|_"+vetor[3]+"_|_"+vetor[4]+"_|_"+vetor[5]+"_|_"+vetor[6]+"_]|                               |  [_NN_|_NN_|_NN_|_NN_|_NN_|_NN_|_NN_]  |";
    }
    cout<<Linha23<<endl;
}

void Jogo::printCartasMovimento(Jogador jog1, Jogador jog2, Carta monte[]){
    string Linha18;
    if(jog1.getCartasMovimento().size() == 0 && jog2.getCartasMovimento().size() == 0){
         Linha18 = "18    |  [_NN_|_NN_|_NN_|_NN_|_NN_|_NN_|_NN_] |         |   | K  |   |         |  [_NN_|_NN_|_NN_|_NN_|_NN_|_NN_|_NN_]  |";
    }else if(jog1.getCartasMovimento().size() != 0 && jog2.getCartasMovimento().size() != 0){
        string vetor[7],vetor2[7];
        for(int k=0;k<7;k++){
            vetor[k] = "NN";
            vetor2[k] = "NN"; 
        }
        for(int i=0;i<jog2.getCartasMovimento().size();i++){
            vetor[i] = (jog2.getCartasMovimento()[i].getCaracter()+jog2.getCartasMovimento()[i].getNaipe());
        }
        for(int j=0;j<jog1.getCartasMovimento().size();j++){
            vetor2[j] = (jog1.getCartasMovimento()[j].getCaracter()+jog1.getCartasMovimento()[j].getNaipe());
        }
        Linha18 = "18    |  [_"+vetor2[0]+"_|_"+vetor2[1]+"_|_"+vetor2[2]+"_|_"+vetor2[3]+"_|_"+vetor2[4]+"_|_"+vetor2[5]+"_|_"+vetor2[6]+"_] |         |   | K  |   |         |  [_"+vetor[0]+"_|_"+vetor[1]+"_|_"+vetor[2]+"_|_"+vetor[3]+"_|_"+vetor[4]+"_|_"+vetor[5]+"_|_"+vetor[6]+"_]  |";
    }else if(jog2.getCartasMovimento().size() != 0){
        string vetor[7];
        for(int k=0;k<7;k++){
            vetor[k] = "NN"; 
        }
        for(int i=0;i<jog2.getCartasMovimento().size();i++){
            vetor[i] = (jog2.getCartasMovimento()[i].getCaracter()+jog2.getCartasMovimento()[i].getNaipe());
        }
        Linha18 = "18    |  [_NN_|_NN_|_NN_|_NN_|_NN_|_NN_|_NN_] |         |   | K  |   |         |  [_"+vetor[0]+"_|_"+vetor[1]+"_|_"+vetor[2]+"_|_"+vetor[3]+"_|_"+vetor[4]+"_|_"+vetor[5]+"_|_"+vetor[6]+"_]  |";
    }else{
        string vetor[7];
        for(int k=0;k<7;k++){
            vetor[k] = "NN"; 
        }
        for(int i=0;i<jog1.getCartasMovimento().size();i++){
            vetor[i] = (jog1.getCartasMovimento()[i].getCaracter()+jog1.getCartasMovimento()[i].getNaipe());
        }
        Linha18 = "18    |  [_"+vetor[0]+"_|_"+vetor[1]+"_|_"+vetor[2]+"_|_"+vetor[3]+"_|_"+vetor[4]+"_|_"+vetor[5]+"_|_"+vetor[6]+"_] |         |   | K  |   |         |  [_NN_|_NN_|_NN_|_NN_|_NN_|_NN_|_NN_]  |";
    }
    cout<<Linha18<<endl;
}

void Jogo::setRoundJog1(int _round){
    this->rounds_Jog1 = _round;
}

void Jogo::setRoundJog2(int _round){
    this->rounds_Jog2 = _round;
}

int Jogo::getRoundJog1(){
    return this->rounds_Jog1;
}

int Jogo::getRoundJog2(){
    return this->rounds_Jog2;
}
