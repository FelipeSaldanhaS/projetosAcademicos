#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float k,m;

	printf("\nDigite uma velocidade em km por h para ser convertido em m por s:\n");
	
	scanf("%f",&k);

	m = k/3.6;
	
	printf("\nO valor convertido: %.2f ms.", m);
	
	return 0;
}
