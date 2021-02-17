#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float valor;
	
	valor = 780000.00 * 0.46;
	printf("\n O primeiro ganhador recebeu: %.2f R$\n",valor);
	valor = 780000.00 * 0.32;
	printf("\n O segundo ganhador recebeu: %.2f R$\n",valor);
	valor = 780000.00 * 0.22;
	printf("\n O terceiro ganhador recebeu: %.2f R$\n",valor);
	
	return 0;
}
