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

float calcularDistancia(point p1, point p2){
	float dist, dx, dy, dz;

	dx = p1.coorX - p2.coorX;
	dy = p1.coorY - p2.coorY;
	dz = p1.coorZ - p2.coorZ;

	dist = sqrt(dx * dx + dy * dy + dz * dz);
	return dist;
}
