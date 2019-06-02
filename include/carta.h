#ifndef HEADER_FILE_CARTA
#define HEADER_FILE_CARTA
#include <iostream>

using namespace std;

class Carta{
    protected:
        string naipe;
        string caracter;
        string tipoCarta;
    public:
        Carta();
        void setNaipe(string _naipe);
        void setCaracter(string _caracter);
        void setTipoCarta(string tipo);
        string getNaipe();
        string getCaracter();
        string getTipoCarta();
        virtual void setValor(int _distancia);
};

#endif