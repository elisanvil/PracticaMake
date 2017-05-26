#include<math.h>

typedef struct {
    int coorX;
    int coorY;
    int coorZ
} point;

point crearPunto(int x, int y, int z);
float calcularDistancia(point p1, point p2);

point crearPunto(int x, int y, int z){
	point p;
	
	p.coorX = x;
	p.coorY = y;
	p.coorZ = z;
	return p;
}
