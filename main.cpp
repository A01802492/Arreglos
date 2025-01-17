#include <iostream>
#include "Corredor.h"
#include "Maratonistas.h"

using namespace std;

int main()
{
  /*  Corredor c[2];//Arreglo de objetos

    for(int i=0;i<2;i++){
        c[i].setNombre();
        c[i].setKms();
        c[i].calculaPromedioC();
        c[i].imprime();
    }
*/

Maratonistas Mar;
Mar.setTam();
Mar.setDatosMaraton();
cout<<"El promedio de los corredores es: "<<Mar.calculaPromedioKmM();

    return 0;
}