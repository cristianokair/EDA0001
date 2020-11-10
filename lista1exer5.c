// 5) Escreva uma função que recebe um vetor e sua capacidade como parâmetros e precisa
// “retornar” o maior e o menor valores do vetor.

#include <stdio.h>
#include <stdlib.h>

void max_min(int vet[], int tam, int *pMin, int *pMax);

int main(int argc, char *argv[]) {
	int vetor[5]={1,2,3,-5,5}, tam = 5, pMin, pMax;

    max_min( vetor, tam, &pMin, &pMax );
	
	printf("Menor: %d Maior: %d\n", pMin, pMax);
	
	return 0;
}

void max_min(int vet[], int tam, int *pMin, int *pMax){
	*pMin = vet[0];
	*pMax = vet[0];
	for(int i = 1; i < tam; i++){
		if (vet[i] < *pMin )
		{
			*pMin = vet[i];
		}
		if (vet[i] > *pMax )
		{
			*pMax = vet[i];
		}
	}
}
