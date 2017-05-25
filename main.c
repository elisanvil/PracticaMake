#include <stdio.h>
#include "point.h"

//===============================
//  Declaracion de funciones
//===============================
void mostrarMensajeInicial();
void mostrarDistancia(float distancia);


int main(){
    

    return 0;
}


//===============================
//  Implementacion de funciones
//===============================
void mostrarMensajeInicial(){

}

void mostrarDistancia(float distancia){
    printf("\n--------------------------------");
    printf("\nLa distancia entre los puntos:");
    printf("\n  A (x,y,z)");
    printf("\n  B (x,y,z)");
    printf("\n... es: %f [u]", distancia);
    printf("\n--------------------------------");
}
