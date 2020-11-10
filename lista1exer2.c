// 2) Escreva uma função que troca os valores entre duas variáveis do tipo float. Faça um
// programa que leia duas variáveis e mostre seus valores na tela. Em seguida, troque os
// valores (usando a função) e mostre novamente os valores.

#include <stdio.h>
#include <stdlib.h>

void troca_valor(float *x, float *y);

int main(int argc, char *argv[]) {
	float a, b;
	printf("Qual valor de A? ");
	scanf("%f", &a);
	printf("Qual valor de B? ");
	scanf("%f", &b);
    printf("Antes de trocar\n");
	printf("A: %f B: %f\n", a, b);
	
	troca_valor( &a, &b );
	
    printf("Depois de trocar\n");
	printf("A: %f B: %f\n", a, b);
	
	return 0;
}

void troca_valor(float *x, float *y){
	float temp = *x;
    *x = *y;
	*y = temp;
}
