#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float M,A;
	
	printf("Digite um valor em metros quadrados para ser convertido em acres: \n");
	scanf("%f",&M);
	
	A = M * 0.000247;
	
	printf("\nAcres: %.2f", A);
	
	return 0;
}

