/*
	@ Autores: 
		Julian Adams
		Elizabeth Sánchez
	@ Descripcion:
		Archivo con la implementacion de las funciones
		definidas en point.h
*/

#include <math.h>
#include <point.h>

point crearPunto(float x, float y, float z){
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

	dist = sqrtf(dx * dx + dy * dy + dz * dz);
	return dist;
}

/*---------------------------------------------------*/