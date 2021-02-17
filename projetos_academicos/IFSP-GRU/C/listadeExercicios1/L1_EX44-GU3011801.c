#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float M,L;
	
	printf("Digite um valor em metros cubicos para ser convertido em litros: \n");
	scanf("%f",&M);
	
	L = M*1000;
	
	printf("\nLitros: %.2f", L);
	
	return 0;
}

