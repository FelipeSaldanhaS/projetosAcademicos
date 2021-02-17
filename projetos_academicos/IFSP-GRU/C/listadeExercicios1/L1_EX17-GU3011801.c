#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float sal = 30.00;
	int dias;
	
	printf("Digite o numero de dias que o encanador ira trabalhar: \n");
	
	scanf("%d",&dias);
	
	sal = (sal * dias) * 0.92;
	
	printf("\n O valor a ser pago, descontado o imposto de renda: %.2f R$", sal);
	return 0;
}
