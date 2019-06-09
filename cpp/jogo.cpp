#include <iostream>
#include <string>
#include "jogo.h"
#include "carta.h"
#include <map>


using namespace std;

void Jogo::atualizaTela(Jogador &jog1, Jogador &jog2, Baralho bar, string tipoCarta, bool defesa, bool mensagem_customizada, string mensagem, bool jog){

string Linha1 =  "1\t\t\t\t\t   ___                                   ___";
string Linha2 =  "2      "+jog1.getNome()+"\t\t\t   Rounds |_"+to_string(this->getRoundJog1())+"_|            esKalibur            |_"+to_string(this->getRoundJog2())+"_| Rounds\t\t\t"+jog2.getNome()+"";
string Linha3 =  "3      _______________________________________           ____________            _______________________________________ ";
string Linha4 =  "4     |   |   |   |   |   |   |   |   |   |   |         |   BARALHO  |          |   |   |   |   |   |   |   |   |   |   |";
string Linha6 =  "6     |___|___|___|___|___|___|___|___|___|___|         |   |   "+bar.getTopo().getNaipe()+"|   |          |___|___|___|___|___|___|___|___|___|___|";
string Linha7 =  "7       1   2   3   4   5   6   7   8   9   10          |   | "+bar.getTopo().getCaracter()+"  |   |           10   9   8   7   6   5   4   3   2   1  ";
string Linha8 =  "8                                                       |   |    |   |                                                   ";
string Linha9 =  "9      _______________________________________          |   |"+bar.getTopo().getNaipe()+"___|   |          ________________________________________ ";
string Linha10 = "10    |                                       |         |            |         |                                        |";
string Linha11 = "11    |                Defesa                 |         |__*Espaco*__|         |                 Defesa                 |";
string Linha12 = "12    |   __________________________________  |                                |   __________________________________   |";
string Linha14 = "14    |    1    2    3    4    5    6     7   |          ____________          |    1    2    3    4    5    6    7     |";
string Linha15 = "15    |                                       |         |    MESA    |         |                                        |";
string Linha16 = "16    |               Movimento               |         |    ____    |         |                Movimento               |";
string Linha17 = "17    |   __________________________________  |         |   |   "+monte.top().getNaipe()+"|   |         |   __________________________________   |";
string Linha19 = "19    |     1    2    3    4    5    6    7   |         |   |    |   |         |    1    2    3    4    5    6    7     |";
string Linha20 = "20    |                                       |         |   |"+monte.top().getNaipe()+"___|   |         |                                        |";
string Linha21 = "21    |                Ataque                 |         |            |         |                 Ataque                 |";
string Linha22 = "22    |   __________________________________  |         |____________|         |   ___________________________________  |";
string Linha24 = "24    |      1    2    3    4    5    6    7  |     ______________________     |    1    2    3    4    5    6    7     |";
string Linha25 = "25    |_______________________________________|    | MENSAGEM AO USUARIO  |    |________________________________________|";
string Linha26 = "26     ____________________________________________|                      |_____________________________________________ ";
string Linha27 = "27    |                                                                                                                 |";
//string Linha28 = "28     \t\t  "+jog1.getNome()+": Escolha uma carta 'Movimento' ou aperte 'espaço' para colher uma carta do baralho.";
string Linha29 = "29    |_________________________________________________________________________________________________________________|";
string Linha30 = "30     ___________________________________                                             _________________________________ ";
string Linha31 = "31    |             Ataques               |             Campo de Batalha              |             Defesas             |";
string Linha32 = "32    |                                   |      _______________________________      |                                 |";
string Linha33 = "33    | Q  = Faca   - Perto     = 2 ou 1  |     |   |   |   |   |   |   |   |   |     | 8 = Armadura- Perto   =-2 ou -1 |";
//string Linha34 = "34    | K  = Espada - Medio     = 2 ou 1  |     | $ |   |   |   |   |   |   | # |     | 7 = Espada  - Medio   =-2 ou -1 |";
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
printCartasMovimento(jog1,jog2);
cout << Linha19 << endl;
cout << Linha20 << endl;
cout << Linha21 << endl;
cout << Linha22 << endl;
printCartasAtaque(jog1,jog2);
cout << Linha24 << endl;
cout << Linha25 << endl;
cout << Linha26 << endl;
cout << Linha27 << endl;
if(mensagem_customizada){
    printMensagem(mensagem);
}else{
    if(jog){
        printMensagem(jog1,tipoCarta, defesa);
    }else{
        printMensagem(jog2,tipoCarta, defesa);
    }
}
cout << Linha29 << endl;
cout << Linha30 << endl;
cout << Linha31 << endl;
cout << Linha32 << endl;
cout << Linha33 << endl;
printPosicao(jog1,jog2);
cout << Linha35 << endl;
cout << Linha36 << endl;
cout << Linha37 << endl;
cout << Linha38 << endl;
cout << Linha39 << endl;
cout << Linha40 << endl;
cout << Linha41 << endl;
cout << Linha42 << endl;

}


void Jogo::adicionaMonte(Carta _carta){
    monte.push(_carta);
}

void Jogo::printMensagem(Jogador jog, string tipoCarta, bool defesa){
    string Linha28;
    if(defesa){
        Linha28 = "28  \t  "+jog.getNome()+": Escolha uma carta '"+tipoCarta+"'(seu respectivo numero) ou aperte 'espaco' para receber o dano do ataque.";
    }else{
        Linha28 = "28  \t  "+jog.getNome()+": Escolha uma carta '"+tipoCarta+"'(seu respectivo numero) ou aperte 'espaco' para colher uma carta do baralho.";
    }
    cout<< Linha28 << endl;
}

void Jogo::printMensagem(string mensagem){
    cout<<"28"<<"                                                   "<< mensagem <<endl;
}
void Jogo::passaVez(Jogador jog){

}

void Jogo::distribuiCartas(Jogador &j1, Jogador &j2, Baralho &br){

    vector<Carta> adicionar;
    vector<Carta> adicionar2;
    for(int i=0;i<9;i++){
        adicionar.push_back(br.getTopo());
        br.desempilha();
    }
    
    for(int i=0;i<9;i++){
        adicionar2.push_back(br.getTopo());
        br.desempilha();
    }

    j1.adicionaCartaEmMao(adicionar);
    j2.adicionaCartaEmMao(adicionar2);

}

Baralho Jogo::misturaBaralhos(Baralho b1, Baralho b2){
    vector<Carta> novo;
    for(int i=0;i<52;i++){
        novo.push_back(b1.getBaralho()[i]);
        novo.push_back(b2.getBaralho()[(52-i-1)]);
    }
    Baralho b;
    b.setCartas(novo);
    return b;
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

void Jogo::printCartasDefesa(Jogador &jog1, Jogador &jog2){
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

void Jogo::printCartasAtaque(Jogador &jog1, Jogador &jog2){
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

void Jogo::printCartasMovimento(Jogador &jog1, Jogador &jog2){
    string Linha18;
    if(jog1.getCartasMovimento().size() == 0 && jog2.getCartasMovimento().size() == 0){
        Linha18 = "18    |  [_NN_|_NN_|_NN_|_NN_|_NN_|_NN_|_NN_] |         |   | "+monte.top().getCaracter()+"  |   |         |  [_NN_|_NN_|_NN_|_NN_|_NN_|_NN_|_NN_]  |";
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
        Linha18 = "18    |  [_"+vetor2[0]+"_|_"+vetor2[1]+"_|_"+vetor2[2]+"_|_"+vetor2[3]+"_|_"+vetor2[4]+"_|_"+vetor2[5]+"_|_"+vetor2[6]+"_] |         |   | "+monte.top().getCaracter()+"  |   |         |  [_"+vetor[0]+"_|_"+vetor[1]+"_|_"+vetor[2]+"_|_"+vetor[3]+"_|_"+vetor[4]+"_|_"+vetor[5]+"_|_"+vetor[6]+"_]  |";
    }else if(jog2.getCartasMovimento().size() != 0){
        string vetor[7];
        for(int k=0;k<7;k++){
            vetor[k] = "NN"; 
        }
        for(int i=0;i<jog2.getCartasMovimento().size();i++){
            vetor[i] = (jog2.getCartasMovimento()[i].getCaracter()+jog2.getCartasMovimento()[i].getNaipe());
        }
        Linha18 = "18    |  [_NN_|_NN_|_NN_|_NN_|_NN_|_NN_|_NN_] |         |   | "+monte.top().getCaracter()+"  |   |         |  [_"+vetor[0]+"_|_"+vetor[1]+"_|_"+vetor[2]+"_|_"+vetor[3]+"_|_"+vetor[4]+"_|_"+vetor[5]+"_|_"+vetor[6]+"_]  |";
    }else{
        string vetor[7];
        for(int k=0;k<7;k++){
            vetor[k] = "NN"; 
        }
        for(int i=0;i<jog1.getCartasMovimento().size();i++){
            vetor[i] = (jog1.getCartasMovimento()[i].getCaracter()+jog1.getCartasMovimento()[i].getNaipe());
        }
        Linha18 = "18    |  [_"+vetor[0]+"_|_"+vetor[1]+"_|_"+vetor[2]+"_|_"+vetor[3]+"_|_"+vetor[4]+"_|_"+vetor[5]+"_|_"+vetor[6]+"_] |         |   | "+monte.top().getCaracter()+"  |   |         |  [_NN_|_NN_|_NN_|_NN_|_NN_|_NN_|_NN_]  |";
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

stack<Carta> Jogo::getMonte(){
    return this->monte;
}

void Jogo::printTelaInicial(){
    cout << "\n\n\n\n";
    cout << "                      ########            ##   ##          ##      ||                    "<< endl;
    cout << "                      ##        ##   ##   ##  ##           ##  @@  ||                    "<< endl;
    cout << "                      ######     ## ##    ## ##   @@@@     ##      ||||)   @   @    #### "<< endl;
    cout << "                      ##          ###     ####   @    @    ##  $$  ||  |)  @   @   ##    "<< endl;
    cout << "                      ##         ## ##    ## ##  @    @@   ##  $$  ||  /)  @   @   ##    "<< endl;
    cout << "                      ########  ##   ##   ##  ##  @@@@  @  ##  $$  ||//)    @@@ @  ##    "<< endl;
}

void Jogo::printPosicao(Jogador jog1, Jogador jog2){
    string vetorPosicoes[8];
    for(int i=0;i<8;i++){
        if(i != (jog1.getPosicao()-1) && i != (jog2.getPosicao()-1)){
            vetorPosicoes[i] = " ";
        }else if( i == (jog1.getPosicao()-1)){
            vetorPosicoes[i] = jog1.getNaipeEsp();
        }else{
            vetorPosicoes[i] = jog2.getNaipeEsp();
        }
    }
    
    string Linha34 = "34    | K  = Espada - Medio     = 2 ou 1  |     | "+vetorPosicoes[0]+" | "+vetorPosicoes[1]+" | "+vetorPosicoes[2]+" | "+vetorPosicoes[3]+" | "+vetorPosicoes[4]+" | "+vetorPosicoes[5]+" | "+vetorPosicoes[6]+" | "+vetorPosicoes[7]+" |     | 7 = Espada  - Medio   =-2 ou -1 |";
    cout<< Linha34 <<endl;
}

void Jogo::limpaTela(){
    system("cls");
}

bool Jogo::validaMovimento(CartaMovimento _movimento, Jogador *j1, Jogador *j2, bool jog1){
    vector<Carta> to_remove;
    for(int i=0;i<j1->getCartasMovimento().size();i++){
        if(j1->getCartasMovimento()[i].getCaracter() == _movimento.getCaracter()
            && j1->getCartasMovimento()[i].getNaipe() == _movimento.getNaipe()){
            Carta para_remover;
            para_remover.setCaracter(j1->getCartasMovimento()[i].getCaracter());
            para_remover.setNaipe(j1->getCartasMovimento()[i].getNaipe());

            to_remove.push_back(para_remover);
            monte.push(para_remover);
            realizaMovimento(j1,j2,_movimento,jog1);
            j1->removeCartaEmMao(to_remove);
            return true;
        }
    }
    return false;
}

pair<bool,pair<int,string>> Jogo::validaAtaque(CartaAtaque _ataque, Jogador *j1, Jogador &j2){
    
    //Guardando caracteres das cartas com as possíveis distâncias que elas podem ser utilizadas
    map<string,pair<int,int>> caracter_distancia;

    caracter_distancia.insert(make_pair("Q",make_pair(0,1)));
    caracter_distancia.insert(make_pair("K",make_pair(2,3)));
    caracter_distancia.insert(make_pair("J",make_pair(4,5)));
    //

    vector<Carta> to_remove;
    for(int i=0;i<j1->getCartasAtaque().size();i++){
        if(j1->getCartasAtaque()[i].getCaracter() == _ataque.getCaracter()
            && j1->getCartasAtaque()[i].getNaipe() == _ataque.getNaipe()){
            
            int distancia = abs(j1->getPosicao()-j2.getPosicao())-1;

            if(j1->getCartasAtaque()[i].getCaracter() != "10"){
                if( distancia != (caracter_distancia.find(j1->getCartasAtaque()[i].getCaracter())->second).first
                    && distancia != (caracter_distancia.find(j1->getCartasAtaque()[i].getCaracter())->second).second){
                    return make_pair(false,make_pair(0,"N"));
                }
            }

            Carta para_remover;
            para_remover.setCaracter(j1->getCartasAtaque()[i].getCaracter());
            para_remover.setNaipe(j1->getCartasAtaque()[i].getNaipe());

            to_remove.push_back(para_remover);
            monte.push(para_remover);

            _ataque.setValor(distancia);
            j1->removeCartaEmMao(to_remove);
            return make_pair(true,make_pair(_ataque.getDano(),_ataque.getCaracter()));
        }
    }
    return make_pair(false,make_pair(0,"N"));
}

pair<bool,int> Jogo::validaDefesa(Jogador *j1, Jogador &j2,CartaDefesa _defesa, string caracter_ataque){
    //Guardando caracteres das cartas com os possíves caracteres que podem ser utilizados
    map<string,string> caracter_caracter;

    caracter_caracter.insert(make_pair("8","Q"));
    caracter_caracter.insert(make_pair("7","K"));
    caracter_caracter.insert(make_pair("9","J"));
    //

    vector<Carta> to_remove;
    for(int i=0;i<j1->getCartasDefesa().size();i++){
        if(j1->getCartasDefesa()[i].getCaracter() == _defesa.getCaracter()
            && j1->getCartasDefesa()[i].getNaipe() == _defesa.getNaipe()){
            
            string caracter_atual = j1->getCartasDefesa()[i].getCaracter();
            int distancia = abs(j1->getPosicao()-j2.getPosicao())-1;

            if(j1->getCartasDefesa()[i].getCaracter() != "6"){
                if( caracter_ataque != (caracter_caracter.find(caracter_atual)->second)
                    && caracter_ataque != (caracter_caracter.find(caracter_atual)->second)){
                    return make_pair(false,0);
                }
            }

            Carta para_remover;
            para_remover.setCaracter(j1->getCartasDefesa()[i].getCaracter());
            para_remover.setNaipe(j1->getCartasDefesa()[i].getNaipe());

            to_remove.push_back(para_remover);
            monte.push(para_remover);

            _defesa.setValor(distancia);
            j1->removeCartaEmMao(to_remove);


            return make_pair(true,_defesa.getDefesa());
        }
    }

}

void Jogo::realizaMovimento(Jogador *j1, Jogador *j2, CartaMovimento _movimento, bool jog1){
    int distancia = abs(j1->getPosicao()-j2->getPosicao())-1;
    _movimento.setValor(distancia);

    if(jog1){
        if( distancia == 0){
            j2->setPosicao(j2->getPosicao()+(-_movimento.getMovimento()));
        }else{
            _movimento.setValor(distancia);
            j1->setPosicao(j1->getPosicao()+_movimento.getMovimento());
        }
    }else{
        if( distancia == 0){
            _movimento.setValor(distancia);
            j2->setPosicao(j2->getPosicao()+_movimento.getMovimento());
        }else{
            _movimento.setValor(distancia);
            j1->setPosicao(j1->getPosicao()-_movimento.getMovimento());
        }
    }

}

void Jogo::pegaBaralho(Jogador *jog1, Baralho *br){
    vector<Carta> toAdd;
    toAdd.push_back(br->getTopo());
    jog1->adicionaCartaEmMao(toAdd);
    br->desempilha();
}
