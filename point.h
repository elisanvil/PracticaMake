/*
	@ Autores: 
		Julian Adams
		Elizabeth Sánchez
	@ Descripcion:
		Archivo con las definiciones de las funciones
		y la definicion del tipo de dato point
*/

typedef struct point {
    float coorX;
    float coorY;
    float coorZ;
} point;

point crearPunto(float x, float y, float z);
float calcularDistancia(point p1, point p2);

/*--------------------------------------------------*/