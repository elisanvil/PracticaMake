#include <stdio.h>
#include <point.h>

typedef enum { false, true } bool;

//===============================
//  Declaracion de funciones
//===============================
void mostrarMensajeInicial();
void mostrarDistancia(point p1, point p2, float dist);

//===============================
//  Programa principal
//===============================
int main(){
	int check = false;
	float x, y, z;
	int okx, oky, okz;
	point p1, p2;
	float distancia;

    mostrarMensajeInicial();

    // Pedimos los datos del punto 1
    do{
    	printf("\n    Coordenadas del punto 1 (x, y, z): ");
    	// ---------------------------------------------------
    	okx = 0;
    	while( okx != 1 ){
    		printf("\n      Ingrese x: ");
    		okx = scanf("%f", &x); getchar(); // getchar() consume el enter
    		if ( okx != 1 )
    			printf("\n      (X) Entrada no valida!\n");
    	}
    	// ---------------------------------------------------
    	oky = 0;
    	while( oky != 1 ){
    		printf("\n      Ingrese y: ");
    		oky = scanf("%f", &y); getchar(); // getchar() consume el enter
    		if ( oky != 1 )
    			printf("\n      (X) Entrada no valida!\n");
    	}
		// ---------------------------------------------------
    	okz = 0;
    	while( okz != 1 ){
    		printf("\n      Ingrese z: ");
    		okz = scanf("%f", &z); getchar();  // getchar() consume el enter
    		if ( okz != 1 ) 
    			printf("\n      (X) Entrada no valida!\n");
    	}
    	// ---------------------------------------------------
    	//  Todo OK
    	if ( okx==1 && oky==1 && okz==1 ) {
    		p1 = crearPunto(x,y,z);
    		check = true;
    	}
    	else {
    		check = false;
    	}

    }while( check==false );



    // Pedimos los datos del punto 2
    do{
    	printf("\n    Coordenadas del punto 2 (x, y, z): ");
    	// ---------------------------------------------------
    	okx = 0;
    	while( okx != 1 ){
    		printf("\n      Ingrese x: ");
    		okx = scanf("%f", &x); getchar(); // getchar() consume el enter
    		if ( okx != 1 )
    			printf("\n      (X) Entrada no valida!\n");
    	}
    	// ---------------------------------------------------
    	oky = 0;
    	while( oky != 1 ){
    		printf("\n      Ingrese y: ");
    		oky = scanf("%f", &y); getchar(); // getchar() consume el enter
    		if ( oky != 1 )
    			printf("\n      (X) Entrada no valida!\n");
    	}
		// ---------------------------------------------------
    	okz = 0;
    	while( okz != 1 ){
    		printf("\n      Ingrese z: ");
    		okz = scanf("%f", &z); getchar();  // getchar() consume el enter
    		if ( okz != 1 ) 
    			printf("\n      (X) Entrada no valida!\n");
    	}
    	// ---------------------------------------------------
    	//  Todo OK
    	if ( okx==1 && oky==1 && okz==1 ) {
    		p2 = crearPunto(x,y,z);
    		check = true;
    	}
    	else {
    		check = false;
    	}

    }while( check==false );

    // Calculamos la distancia
    distancia = calcularDistancia(p1, p2);

    // Mostramos el resultado
    mostrarDistancia(p1, p2, distancia);

    
    return 0;
}



//===============================
//  Implementacion de funciones
//===============================
void mostrarMensajeInicial(){
    printf("\n.--------------------------------------.");
    printf("\n|  Programa que calcula la distancia   |");
    printf("\n|  entre dos puntos 'A' y 'B' en R3    |");
    printf("\n|                                      |");
    printf("\n|  REGLAS:                             |");
    printf("\n|  - Ingrese enteros o flotantes para  |");
    printf("\n|    cada coordenada de los puntos     |");
    printf("\n|    A y B.                            |");
    printf("\n'--------------------------------------'\n");
}


void mostrarDistancia(point p1, point p2, float dist){
    printf("\n---------------------------------------------");
    printf("\n    La distancia entre los puntos");
    printf("\n      A [x= %6.2f, y= %6.2f, z= %6.2f]", p1.coorX, p1.coorY, p1.coorZ);
    printf("\n      B [x= %6.2f, y= %6.2f, z= %6.2f]", p2.coorX, p2.coorY, p2.coorZ);
    printf("\n    es: %9.2f [m3]", dist);
    printf("\n---------------------------------------------\n");
}
