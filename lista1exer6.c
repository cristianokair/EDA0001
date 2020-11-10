// 6) Escreva um programa que determine o maior valor de um vetor bem como sua posição no
// vetor (índice). Tal processamento deve ser feito em uma função que recebe o vetor (do
// tipo float) e sua capacidade, e “retorna” o maior elemento e sua posição.

#include <stdio.h>
#include <stdlib.h>

void max_vetor(float vet[], int tam, float *pMax, int *pIndice);

int main(int argc, char *argv[]) {
	float vetor[5]={1.56,2.98,3.369,-5.01,5.333}, pMax;
	int tam = 5, pIndice;

    max_vetor( vetor, tam, &pMax, &pIndice);
	
	printf("Maior valor: %f Indice do maior valor: %d\n", pMax, pIndice);
	
	return 0;
}

void max_vetor(float vet[], int tam, float *pMax, int *pIndice){
	*pMax = vet[0];
	*pIndice = 0;
	for(int i = 1; i < tam; i++){
		if (vet[i] > *pMax )
		{
			*pMax = vet[i];
			*pIndice = i;
		}
	}
}
