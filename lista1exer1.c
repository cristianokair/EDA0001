//1) Faça uma função que recebe dois números, a e b. A função deve incrementar a e
//decrementar b.

#include <stdio.h>
#include <stdlib.h>

void inc_dec( int *pA, int *pB );

int main(int argc, char *argv[]) {
	int a, b;
	printf("Qual valor de A? ");
	scanf("%d", &a);
	printf("Qual valor de B? ");
	scanf("%d", &b);
	
	inc_dec( &a, &b );
	
	printf("A: %d B: %d\n", a, b);
	
	return 0;
}

void inc_dec( int *pA, int *pB ){
	(*pA)++;
	(*pB)--;
}
