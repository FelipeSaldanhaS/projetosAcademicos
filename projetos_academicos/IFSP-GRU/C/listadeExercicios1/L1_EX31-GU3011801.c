#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float c,l,p,total;
	
	printf("Digite o comprimento: \n");
	scanf("%f", &c);
	printf("Digite a largura: \n");
	scanf("%f", &l);
	printf("Digite o valor do arame por metro: \n");
	scanf("%f", &p);
	
	total = (c*l)*p;
	
	printf("\nValor do arame pela area total: %.2f R$",total);
	
	return 0;
}
