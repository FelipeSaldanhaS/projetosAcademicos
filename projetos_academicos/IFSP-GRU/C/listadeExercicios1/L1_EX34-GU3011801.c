#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float C,K;
	
	printf("Digite um valor em graus Kelvin para ser convertido em Celsius: \n");
	scanf("%f",&K);
	
	C = K - 273.15;
	
	printf("\nCelsius: %.1f", C);
	
	return 0;
}

