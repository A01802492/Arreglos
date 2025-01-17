#include "Corredor.h"
#include <iostream>

using namespace std;

Corredor::Corredor()
{
    nombre = "";
    tam = 7;
    promKm = 0;

    for(int i = 0;i<tam;i++){
        kms[i]=0;
    }
}

void Corredor::setNombre()
{
    cout<<"Ingresa el nombre del corredor: ";
    cin>>nombre;
}

void Corredor::setTam()
{
    tam = 7;
}

void Corredor::setKms()
{
    cout <<"Ingresa los km por día del corredor: "<<endl;
    for(int i = 0;i<tam;i++){
        cout<<"Día "<<i+1<<": ";
        cin>>kms[i];
    }
}

string Corredor::getNombre()
{
    return nombre;
}

int Corredor::getTam()
{
    return tam;
}

float Corredor::getPromKm()
{
    return promKm;
}

void Corredor::calculaPromC()
{
    float s = 0;

    for(int i = 0;i<tam;i++){
            s = s+kms[i];
    }
    promKm = s/tam;
}

void Corredor::imprime()
{

        cout<<"Nombre: "<<nombre;
        cout<<" Kms recorridos por día: ";
        for(int i = 0;i<tam;i++){
            cout<<"["<<kms[i]<<"]";
    }
    cout<<" Promedio kms recorridos por semana: "<<promKm<<endl;
}

Corredor::~Corredor()
{

}