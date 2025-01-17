#ifndef CORREDOR_H
#define CORREDOR_H
using namespace std;
#include <iostream>



class Corredor
{
    private:
        string nombre;
        int kms[7];
        int tam;
        float promKm;

    public:
        Corredor();
        void setNombre();
        void setTam();
        void setKms();

        string getNombre();
        int getTam();
        float getPromKm();
        
        void calculaPromC();
        void imprime();

        virtual ~Corredor();

};

#endif