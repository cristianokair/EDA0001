// 7) Faça um programa que determine o menor valor de uma matriz 3x4, bem como suas
// coordenadas (linha e coluna). Tal processamento deve ser feito por uma função que
// recebe a matriz e “retorna” o menor elemento e suas coordenadas (i e j).

#include <stdio.h>
#include <stdlib.h>

void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ);

int main(int argc, char *argv[]) {
	float matriz[3][4] = {{1,2,3,4},{5,-6,7,8},{-9,10,11,12}}, pMin;
	int pI, pJ;

    min_matriz( matriz, &pMin, &pI, &pJ);
	
	printf("m[%d][%d] = %f\n", pI, pJ, pMin);
	
	return 0;
}

void min_matriz(float mat[3][4], float *pMin, int *pI, int *pJ){
	*pMin = mat[0][0];
	*pI = 0;
	*pJ = 0;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j< 4; j++){
			if (mat[i][j] < *pMin )
			{
				*pMin = mat[i][j];
				*pI = i;
				*pJ = j;
			}
		}
	}
}
