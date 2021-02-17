#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float M,J;
	
	printf("Digite um valor em metros para ser convertido em jardas: \n");
	scanf("%f",&M);
	
	J = M/0.91;
	
	printf("\nJardas: %.2f", J);
	
	return 0;
}

