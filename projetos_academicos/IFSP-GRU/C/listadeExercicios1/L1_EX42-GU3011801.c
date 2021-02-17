#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float P,C;
	
	printf("Digite um valor em polegadas para ser convertido em centimetros: \n");
	scanf("%f",&P);
	
	C = P * 2.54;
	
	printf("\nCentrimetros: %.2f", C);
	
	return 0;
}

