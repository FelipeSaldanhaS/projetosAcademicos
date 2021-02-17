#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float M,J;
	
	printf("Digite um valor em jardas para ser convertido em metros: \n");
	scanf("%f",&J);
	
	M = 0.91*J;
	
	printf("\nMetros: %.2f", M);
	
	return 0;
}

