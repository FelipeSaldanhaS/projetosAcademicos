#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float M,L;
	
	printf("Digite um valor em litros para ser convertido em metros cubicos: \n");
	scanf("%f",&L);
	
	M = L/1000;
	
	printf("\nMetros Cubicos: %.2f", M);
	
	return 0;
}

