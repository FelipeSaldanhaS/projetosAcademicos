#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float H,M;
	
	printf("Digite um valor em Hectares para ser convertido em metros: \n");
	scanf("%f",&H);
	
	M = H * 10000;
	
	printf("\nMetros: %.2f", M);
	
	return 0;
}

