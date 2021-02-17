#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float k,m;
	
	printf("Digite um valor em milhas para ser convertido em quilometros:\n");
	scanf("%f", &m);
	
	k = m* 1.61;
	
	
	printf("\nQuilometros: %.2f", k);
	return 0;
}
