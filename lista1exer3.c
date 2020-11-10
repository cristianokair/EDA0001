// 3) Faça uma função que calcula o perímetro e a área de um círculo, dado o raio.

#include <stdio.h>
#include <stdlib.h>

#define M_PI 3.14159265358979323846

void calcula_circulo(float raio, float *pPerimetro, float *pArea);

int main(int argc, char *argv[]) {
	float raio, perimetro, area;
	printf("Qual valor do Raio? ");
	scanf("%f", &raio);

    calcula_circulo( raio, &perimetro, &area );
	
	printf("Perimetro: %f\nArea: %f\n", perimetro, area);
	
	return 0;
}

void calcula_circulo(float r, float *x, float *y){
	*x = 2 * M_PI * r;
    *y = M_PI * r * r;
}
