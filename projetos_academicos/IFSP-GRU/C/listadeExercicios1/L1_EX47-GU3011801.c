#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float K,L;
	
	printf("Digite um valor em libras para ser convertido em quilogramas: \n");
	scanf("%f",&L);
	
	K = L*0.45;
	
	printf("\nQuilogramas: %.2f", K);
	
	return 0;
}

