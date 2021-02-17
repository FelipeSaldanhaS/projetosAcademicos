#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float H,M;
	
	printf("Digite um valor em metros para ser convertido em Hectares: \n");
	scanf("%f",&M);
	
	H = M * 0.0001;
	
	printf("\nHectares: %.1f", H);
	
	return 0;
}

