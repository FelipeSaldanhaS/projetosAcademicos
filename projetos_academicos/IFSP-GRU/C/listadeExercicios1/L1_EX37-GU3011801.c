#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float k,m;

	printf("\nDigite uma velocidade em m por s para ser convertido em km por h:\n");
	
	scanf("%f",&m);

	k = m * 3.6;
	
	printf("\nO valor convertido: %.2f kmh.", k);
	
	return 0;
}
