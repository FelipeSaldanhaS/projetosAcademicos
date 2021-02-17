#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float C,F;
	
	printf("Digite um valor em graus Fahreinheit para ser convertido em Celsius: \n");
	scanf("%f",&F);
	
	C = 5.0 *(F - 32.0)/9.0;
	
	printf("\Celsius: %.1f", C);
	
	return 0;
}

