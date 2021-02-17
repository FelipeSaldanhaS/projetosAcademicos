#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int valor;
	
	printf("Digite um numero: \n");
	
	scanf("%d", &valor);
	
	
	printf("Antecessor: %d e Sucessor: %d ,de %d\n",valor-1, valor+1, valor);
	return 0;
}
