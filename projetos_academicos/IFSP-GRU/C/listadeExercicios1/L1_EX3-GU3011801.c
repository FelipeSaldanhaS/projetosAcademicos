#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float valor;
	
	printf("\nDigite um valor que sera exponenciado pela base 2\n");
	
	scanf("%f",&valor);
	
	valor=valor*valor;
	
	printf("\nValor final: %f",valor);
	
	return 0;
}
