#include <iostream>
#include <string>

using namespace std;

int main(){

string Linha1 =  "1                  ___                    ___                                   ___                            ___       ";
string Linha2 =  "2         Jogador |_$_|           Rounds |_2_|            esKalibur            |_1_| Rounds           Jogador |_#_|      ";
string Linha3 =  "3      _______________________________________           ____________            _______________________________________ ";
string Linha4 =  "4     |   |   |   |   |   |   |   |   |   |   |         |   BARALHO  |          |   |   |   |   |   |   |   |   |   |   |";
string Linha5 =  "5     | 0 | 0 | 0 | 0 | 0 | 0 | 0 |   |   |   |         |    ____    |          |   |   |   |   |   | 0 | 0 | 0 | 0 | 0 |";
string Linha6 =  "6     |___|___|___|___|___|___|___|___|___|___|         |   |   $|   |          |___|___|___|___|___|___|___|___|___|___|";
string Linha7 =  "7       1   2   3   4   5   6   7   8   9   10          |   | J  |   |           10   9   8   7   6   5   4   3   2   1  ";
string Linha8 =  "8                                                       |   |    |   |                                                   ";
string Linha9 =  "9      _______________________________________          |   |$___|   |          ________________________________________ ";
string Linha10 = "10    |                                       |         |            |         |                                        |";
string Linha11 = "11    |                Defesa                 |         |__*Espaço*__|         |                 Defesa                 |";
string Linha12 = "12    |   __________________________________  |                                |   __________________________________   |";
string Linha13 = "13    |  [_6$_|_5&_|_6$_|_7@_|_9&_|_6$_|_9@_] |                                |  [_8$_|_6&_|_7$_|_8@_|_9&_|_6$_|_9@_]  |";
string Linha14 = "14    |    1    2    3    4    5    6     7   |          ____________          |    1    2    3    4    5    6    7     |";
string Linha15 = "15    |                                       |         |    MESA    |         |                                        |";
string Linha16 = "16    |               Movimento               |         |    ____    |         |                Movimento               |";
string Linha17 = "17    |   __________________________________  |         |   |   #|   |         |   __________________________________   |";
string Linha18 = "18    |  [_4#_|_5#_|_2$_|_3@_|_3&_|_A$_|_4$_] |         |   | K  |   |         |  [_4#_|_5#_|_2$_|_3@_|_3&_|_A$_|_4$_]  |";
string Linha19 = "19    |     1    2    3    4    5    6    7   |         |   |    |   |         |    1    2    3    4    5    6    7     |";
string Linha20 = "20    |                                       |         |   |#___|   |         |                                        |";
string Linha21 = "21    |                Ataque                 |         |            |         |                 Ataque                 |";
string Linha22 = "22    |   __________________________________  |         |____________|         |   ___________________________________  |";
string Linha23 = "23    |  [_J@_|_Q#_|_K$_|_J$_|_J#_|_K&_|_10$] |                                |  [_J@_|_Q#_|_K$_|_J$_|_J#_|_K&_|_10$_] |";
string Linha24 = "24    |      1    2    3    4    5    6    7  |     ______________________     |    1    2    3    4    5    6    7     |";
string Linha25 = "25    |_______________________________________|    | MENSAGEM AO USUÁRIO  |    |________________________________________|";
string Linha26 = "26     ____________________________________________|                      |_____________________________________________ ";
string Linha27 = "27    |                                                                                                                 |";
string Linha28 = "28    | Jogador $ : Escolha uma carta 'Movimento' ou aperte 'espaço' para colher uma carta do baralho.                  |";
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
cout << Linha5 << endl;
cout << Linha6 << endl;
cout << Linha7 << endl;
cout << Linha8 << endl;
cout << Linha9 << endl;
cout << Linha10 << endl;
cout << Linha11 << endl;
cout << Linha12 << endl;
cout << Linha13 << endl;
cout << Linha14 << endl;
cout << Linha15 << endl;
cout << Linha16 << endl;
cout << Linha17 << endl;
cout << Linha18 << endl;
cout << Linha19 << endl;
cout << Linha20 << endl;
cout << Linha21 << endl;
cout << Linha22 << endl;
cout << Linha23 << endl;
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

return 0;
}