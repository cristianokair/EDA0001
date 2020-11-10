// 4) Faça uma função que receba um parâmetro (por valor) com o total de minutos passados
// ao longo do dia e receba também dois parâmetros (referência) no qual deve preencher
// com o valor da hora e do minuto corrente. Faça um programa que leia do teclado quantos
// minutos se passaram desde meia-noite e imprima a hora corrente (use a sua função).

#include <stdio.h>
#include <stdlib.h>

void cacula_hora(int totalMinutos, int *pHora, int *pMinuto);

int main(int argc, char *argv[]) {
	int totalMinutos, pHora, pMinuto;
	printf("Quantos minutos se passaram desde meia noite? ");
	scanf("%d", &totalMinutos);

    cacula_hora( totalMinutos, &pHora, &pMinuto );
	
	printf("Hora atual: %d:%dh\n", pHora, pMinuto);
	
	return 0;
}

void cacula_hora(int totalMinutos, int *pHora, int *pMinuto){
	*pHora = totalMinutos / 60;
	*pMinuto = totalMinutos % 60;

}
