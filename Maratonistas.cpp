#include "Maratonistas.h"
#include <iostream>
using namespace std;

Maratonistas::Maratonistas()
{
    tam=0;
}

Maratonistas::~Maratonistas()
{
    //dtor
}
void Maratonistas::setTam()
{
    cout<<"Cuantos corredores son: ";
    cin>>tam;
}

int Maratonistas::getTam()
{
    return tam;
}

void Maratonistas::setDatosMaraton()
{
    for(int i=0;i<tam;i++){
        M[i].setNombre();
        M[i].setKms();
        M[i].calculaPromC();
        //M[i].imprime();
    }
}

float Maratonistas::calculaPromedioKmM()
{
    float s=0;
    for(int i=0;i<tam;i++){
        s=s+M[i].getPromKm();
    }
    return s/tam;
}