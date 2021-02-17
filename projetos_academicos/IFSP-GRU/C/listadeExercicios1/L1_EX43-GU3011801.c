#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float P,C;
	
	printf("Digite um valor em centimetros para ser convertido em polegadas: \n");
	scanf("%f",&C);
	
	P = C / 2.54;
	
	printf("\nPolegadas: %.2f", P);
	
	return 0;
}

