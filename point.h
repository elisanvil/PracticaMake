#include<math.h>

typedef struct {
    int coorX;
    int coorY;
    int coorZ
} point;

point crearPunto(int x, int y, int z);
float calcularDistancia(point p1, point p2);
