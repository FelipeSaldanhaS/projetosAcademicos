#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float C,F;
	
	printf("Digite um valor em graus Celsius para ser convertido em Fahreinheit: \n");
	scanf("%f",&C);
	
	F = C * (9.0/5.0) + 32;
	
	printf("\nFahrenheit: %.1f", F);
	
	return 0;
}
