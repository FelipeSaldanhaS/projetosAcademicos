#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float M,A;
	
	printf("Digite um valor em acres para ser convertido em metros quadrados: \n");
	scanf("%f",&A);
	
	M = A * 4048.58;
	
	printf("\nMetros quadrados: %.2f", M);
	
	return 0;
}

