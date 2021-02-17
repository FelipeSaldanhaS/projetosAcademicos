#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float C,K;
	
	printf("Digite um valor em graus Celsius para ser convertido em Kelvin: \n");
	scanf("%f",&C);
	
	K = C + 273.15;
	
	printf("\nKelvin: %.2f", K);
	
	return 0;
}

