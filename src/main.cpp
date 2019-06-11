#include <iostream>
#include "jogo.cpp"
#include "jogador.cpp"
#include "carta.cpp"
#include "baralho.cpp"
#include "cartaataque.cpp"
#include "cartadefesa.cpp"
#include "cartamovimento.cpp"
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    // Definição das variáveis 
    Jogador j1,j2;
    Jogo jogo;
    Baralho br,br2,brFinal;
    string simbolo,naipe,valor,simbolo_ataque;
    bool pegou_baralho = false;
    pair<bool,Jogador*> jogador_atual;
    int dano_carta_ataque = 0;
    Baralho *pointer;
    Jogador *jog2,*jog1;
    //Iniciando baralhos e configurações padrões...
    br.criarBaralho();
    br.embaralhar();
    br2.criarBaralho();
    br2.embaralhar();
    jogo.setRoundJog1(0);
    jogo.setRoundJog2(0);
    j1.setVida(10);
    j2.setVida(10);
    j1.setPosicao(1);
    j2.setPosicao(8);
    //Cadastrando jogadores e seus respectivos naipes
    jogo.printTelaInicial();
    j1.setNome(1);
    j1.setNaipe();
    //
    jogo.printTelaInicial();
    j2.setNome(2);
    j2.setNaipe();

    //Distribuindo cartas entre os jogadores e unindo baralhos
    brFinal = jogo.misturaBaralhos(br,br2);
    pointer = &brFinal;
    jogo.distribuiCartas(j1,j2,brFinal);
    //Criando carta nula para começar no monte
    Carta inicial;
    inicial.setCaracter("N");
    inicial.setNaipe("N");
    jogo.adicionaMonte(inicial);

    //Iniciando o jogo...
    jogador_atual.first = true;
    jogador_atual.second = &j1;
    jog2 = &j2;
    jog1 = &j1;
    
    while(jog1->getQntVidas() > 0 && jog2->getQntVidas() > 0){
        //Primeiro jogador começa jogando

        // Lembrando da sequência definida de ações a serem tomadas
        // 1 - Defesa(Caso tenha ocorrido ataque)
        // 2 - Movimento
        // 3 - Ataque

        //Defesa

         if(dano_carta_ataque != 0){
            
            if(jogador_atual.first){
                jogo.atualizaTela(j1,j2,brFinal,"Defesa", true, false,"",true);
            }else{
                jogo.atualizaTela(j1,j2,brFinal,"Defesa", true, false,"",false);
            }
            cout<<endl;

            cout<<" Escolha uma das opcoes(Caso escolha defender, digite o símbolo e o naipe da carta) : ";
            cin>>valor;
            if(valor.size() != 1 && to_string(valor[0]) != "110"){
                if(valor.size() == 2 || ((to_string(valor[0]) == "49") && (to_string(valor[1]) == "48") && valor.size() == 3)){
                    if(valor.size() == 2){
                        simbolo = valor[0];
                        naipe = valor[1];
                    }else{
                        simbolo = "10";
                        naipe = valor[2];
                    }
                }else{
                    if(valor.size() != 1 && to_string(valor[0]) != "110"){
                        cout<<"Digite o simbolo e naipe da carta juntos e com dois caracteres."<<endl;
                        system("pause");
                    }else{
                        pegou_baralho = true;
                    }
                }
                if(pegou_baralho == false){
                    pair<bool,int> resultado;
                    //Validando se a carta escolhida foi do tipo ataque e se o jogador possui a carta escolhida
                    if(jogador_atual.first){
                        resultado = jogo.validaDefesa(jogador_atual.second,j2,CartaDefesa(simbolo,naipe),simbolo_ataque);
                    }else{
                        resultado = jogo.validaDefesa(jogador_atual.second,j1,CartaDefesa(simbolo,naipe),simbolo_ataque);
                    }
                    if(resultado.first == false){
                        while(resultado.first == false){              
                            cout<<" A carta informada nao esta na sua mao,nao e do tipo defesa ou viola as regras de defesa!"<<endl;
                            system("pause");
                            jogo.limpaTela();
                            if(jogador_atual.first){
                                jogo.atualizaTela(j1,j2,brFinal,"Defesa", true, false,"",true);
                            }else{
                                jogo.atualizaTela(j1,j2,brFinal,"Defesa", true, false,"",false);
                            }
                            cout<<endl;
                            cout<<" Escolha uma das opcoes(Caso escolha defender, digite o símbolo e o naipe da carta) : ";
                            cin>>valor;
                            if(valor.size() == 2 || ((to_string(valor[0]) == "49") && (to_string(valor[1]) == "48") && valor.size() == 3)){
                                if(valor.size() == 2){
                                    simbolo = valor[0];
                                    naipe = valor[1];
                                }else{
                                    simbolo = "10";
                                    naipe = valor[2];
                                }
                            }else{
                                if(valor.size() != 1 && to_string(valor[0]) != "110"){
                                    cout<<"Digite o simbolo e naipe da carta juntos e com dois caracteres."<<endl;
                                    system("pause");
                                }else{
                                    pegou_baralho = true;
                                    break;
                                }
                            }
                            if(jogador_atual.first){
                                resultado = jogo.validaDefesa(jogador_atual.second,j2,CartaDefesa(simbolo,naipe),simbolo_ataque);
                            }else{
                                resultado = jogo.validaDefesa(jogador_atual.second,j1,CartaDefesa(simbolo,naipe),simbolo_ataque);
                            }
                        }
                    }
                    if(pegou_baralho==false){
                        cout<<"Defesa realizado com sucesso !"<<endl;
                        system("pause");
                        (jogador_atual.second)->setVida((jogador_atual.second)->getQntVidas()-(dano_carta_ataque-resultado.second));
                    }else{
                        cout<<"Dano recebido !"<<endl;
                        system("pause");
                        pegou_baralho = false;
                    }
                }else{
                    cout<<"Dano recebido !"<<endl;
                    system("pause");
                    pegou_baralho = false;
                }
            }else{
                cout<<"Dano recebido !"<<endl;
                (jogador_atual.second)->setVida((jogador_atual.second)->getQntVidas()-dano_carta_ataque);
            }
         }

        
        // Movimento

        if(jogador_atual.first){
            jogo.atualizaTela(j1,j2,brFinal,"Movimento", false, false,"",true);
        }else{
            jogo.atualizaTela(j1,j2,brFinal,"Movimento", false, false,"",false);
        }
        cout<<endl;

        cout<<" Escolha uma das opcoes(Caso escolha movimentar, digite o símbolo e o naipe da carta) : ";
        cin>>valor;
        if(valor.size() != 1 && to_string(valor[0]) != "110"){ // 110 é o valor de "n" quando convertido usando to_string
            //Validando o formato da Carta digitado. Ex : A@
            if(valor.size() == 2 || ((to_string(valor[0]) == "49") && (to_string(valor[1]) == "48") && valor.size() == 3)){
                if(valor.size() == 2){
                    simbolo = valor[0];
                    naipe = valor[1];
                }else{
                    simbolo = "10";
                    naipe = valor[2];
                }
            }else{
                if(valor.size() != 1 && to_string(valor[0]) != "110"){
                    cout<<"Digite o simbolo e naipe da carta juntos e com dois caracteres."<<endl;
                    system("pause");
                }else{
                    pegou_baralho = true;
                }
            }
            if(pegou_baralho == false){
                //Validando se a carta escolhida foi do tipo movimento e se o jogador possui a carta escolhida
                bool resultado2;
                if(jogador_atual.first){
                    resultado2 = jogo.validaMovimento(CartaMovimento(simbolo,naipe), jogador_atual.second, jog2, jogador_atual.first);
                }else{
                    resultado2 = jogo.validaMovimento(CartaMovimento(simbolo,naipe), jogador_atual.second, jog1, jogador_atual.first);
                }
                if( resultado2 == false){
                    while(resultado2 == false){
                        //Método validaMovimento já remove a carta da mão do jogador e chama outro método que atualiza sua posição no cenário do jogo
                        cout<<" A carta informada nao esta na sua mao ou nao e do tipo movimento !"<<endl;
                        system("pause");
                        if(jogador_atual.first){
                            jogo.atualizaTela(j1,j2,brFinal,"Movimento", false, false,"",true);
                        }else{
                            jogo.atualizaTela(j1,j2,brFinal,"Movimento", false, false,"",false);
                        }
                        cout<<endl;
                        cout<<" Escolha uma das opcoes(Caso escolha movimentar, digite o símbolo e o naipe da carta) : ";
                        cin>>valor;
                        if(valor.size() == 2 || ((to_string(valor[0]) == "49") && (to_string(valor[1]) == "48") && valor.size() == 3)){
                            if(valor.size() == 2){
                                simbolo = valor[0];
                                naipe = valor[1];
                            }else{
                                simbolo = "10";
                                naipe = valor[2];
                            }
                        }else{
                            if(valor.size() == 1 && to_string(valor[0]) == "110"){
                                pegou_baralho = true;
                                break;
                            }
                        }
                        if(jogador_atual.first){
                            resultado2 = jogo.validaMovimento(CartaMovimento(simbolo,naipe), jogador_atual.second, jog2, jogador_atual.first);
                        }else{
                            resultado2 = jogo.validaMovimento(CartaMovimento(simbolo,naipe), jogador_atual.second, jog1, jogador_atual.first);
                        }
                    }
                }
            }
            if(pegou_baralho == false){
                cout<<"Movimento realizado com sucesso !"<<endl;
                system("pause");
            }else{
                cout<<"Carta recolhida do baralho com sucesso !"<<endl;
                jogo.pegaBaralho(jogador_atual.second,pointer);
                pegou_baralho = false;
                system("pause");
            }
        }else{
            // Caso o jogador tenha escolhido colher do baralho
            jogo.pegaBaralho(jogador_atual.second,pointer);
        }

        // Atualizando respectivos jogadores com os valores corretos

        if(jogador_atual.first){
            jogador_atual.second = &j1;
        }else{
            jogador_atual.second = &j2;
        }

        //Ataque
        
        if(jogador_atual.first){
            jogo.atualizaTela(j1,j2,brFinal,"Ataque", false, false,"",true);
        }else{
            jogo.atualizaTela(j1,j2,brFinal,"Ataque", false, false,"",false);
        }
        cout<<endl;

        cout<<" Escolha uma das opcoes(Caso escolha atacar, digite o símbolo e o naipe da carta) : ";
        cin>>valor;
        
        if(valor.size() != 1 && to_string(valor[0]) != "110"){
            if(valor.size() == 2 || ((to_string(valor[0]) == "49") && (to_string(valor[1]) == "48") && valor.size() == 3)){
                if(valor.size() == 2){
                    simbolo = valor[0];
                    naipe = valor[1];
                }else{
                    simbolo = "10";
                    naipe = valor[2];
                }
            }else{
                if(valor.size() != 1 && to_string(valor[0]) != "110"){
                    cout<<"Digite o simbolo e naipe da carta juntos e com dois caracteres."<<endl;
                    system("pause");
                }else{
                    pegou_baralho = true;
                }
            }
            if(pegou_baralho==false){
                pair<bool,pair<int,string>> resultado;
                //Validando se a carta escolhida foi do tipo ataque e se o jogador possui a carta escolhida
                if(jogador_atual.first){
                    resultado = jogo.validaAtaque(CartaAtaque(simbolo,naipe), jogador_atual.second, j2);
                }else{
                    resultado = jogo.validaAtaque(CartaAtaque(simbolo,naipe), jogador_atual.second, j1);
                }
                if(resultado.first == false){
                    while(resultado.first == false){              
                        cout<<" A carta informada nao esta na sua mao,nao e do tipo ataque ou viola as regras de ataque!"<<endl;
                        system("pause");
                        jogo.limpaTela();
                        if(jogador_atual.first){
                            jogo.atualizaTela(j1,j2,brFinal,"Ataque", false, false,"",true);
                        }else{
                            jogo.atualizaTela(j1,j2,brFinal,"Ataque", false, false,"",false);
                        }
                        cout<<endl;
                        cout<<" Escolha uma das opcoes(Caso escolha atacar, digite o símbolo e o naipe da carta) : ";
                        cin>>valor;
                        if(valor.size() == 2 || ((to_string(valor[0]) == "49") && (to_string(valor[1]) == "48") && valor.size() == 3)){
                            if(valor.size() == 2){
                                simbolo = valor[0];
                                naipe = valor[1];
                            }else{
                                simbolo = "10";
                                naipe = valor[2];
                            }
                        }else{
                            if(valor.size() == 1 && to_string(valor[0]) == "110"){
                                pegou_baralho = true;
                                break;
                            }
                        }
                        if(jogador_atual.first){
                            resultado = jogo.validaAtaque(CartaAtaque(simbolo,naipe), jogador_atual.second, j2);
                        }else{
                            resultado = jogo.validaAtaque(CartaAtaque(simbolo,naipe), jogador_atual.second, j1);
                        }
                    }
                }              
                if(pegou_baralho == false){
                    cout<<"Ataque realizado com sucesso !"<<endl;
                    system("pause");
                    dano_carta_ataque = (resultado.second).first;
                    simbolo_ataque = (resultado.second).second;
                }else{
                    dano_carta_ataque = 0;
                    cout<<"Carta recolhida do baralho com sucesso !"<<endl;
                    jogo.pegaBaralho(jogador_atual.second,pointer);
                    pegou_baralho = false;
                    system("pause");
                }       
            }else{
                dano_carta_ataque = 0;
                cout<<"Carta recolhida do baralho com sucesso !"<<endl;
                jogo.pegaBaralho(jogador_atual.second,pointer);
                pegou_baralho = false;
                system("pause");
            }
        }else{
            dano_carta_ataque = 0;
            jogo.pegaBaralho(jogador_atual.second,pointer);
        }

        if(jogador_atual.first){
            jogador_atual.second = &j1;
        }else{
            jogador_atual.second = &j2;
        }

        if(jogador_atual.first == true){
            jogador_atual.first = false;
            jogador_atual.second = &j2;
        }else{
            jogador_atual.first = true;
            jogador_atual.second = &j1;
        }
    }

    system("pause");


    if(jog1->getQntVidas() == 0){
        cout<<jog2->getNome()<<" venceu o jogo !"<<endl;
    }else{
        cout<<jog1->getNome()<<" venceu o jogo !"<<endl;
    }
}
