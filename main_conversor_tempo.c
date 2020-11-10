#include <stdio.h>
#include <stdlib.h>

void converte( int x, int *pH, int *pM, int *pS );

int main(int argc, char *argv[]) {
	int t, horas, min, seg;
	printf("Quantos segundos? ");
	scanf("%d", &t);
	
	converte( t, &horas, &min, &seg );
	
	printf("%d h %d min %d s\n", horas, min, seg);
	
	return 0;
}

void converte( int x, int *pH, int *pM, int *pS ){
	*pH = x / 3600;
	int resto = x % 3600;
	*pM = resto / 60;
	*pS = resto % 60;
}

