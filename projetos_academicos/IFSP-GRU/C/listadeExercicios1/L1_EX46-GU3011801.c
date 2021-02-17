#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float K,L;
	
	printf("Digite um valor em quilogramas para ser convertido em libras: \n");
	scanf("%f",&K);
	
	L = K/0.45;
	
	printf("\nLibras: %.2f", L);
	
	return 0;
}

