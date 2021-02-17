#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float valor;
	int i;
	printf("Escolha entre:\n 1= pagar parcelado 3x sem juros\n 2= a vista com 10pct de desconto\n \n");
		scanf("%d",&i);
		switch (i){
			case 1:
				printf("\nDigite o valor do produto a ser parcelado 3x sem juros em R$(use vírgula):\n");
				scanf("%f",&valor);
				printf("\nO valor de cada parcela é: %.2f R$\nO valor da comissão do vendedor (5pct)é igual a: %.2f R$",valor / 3,valor * 0.05);
				break;
			case 2:
				printf("\nDigite o valor do produto a ser descontado 10pct do valor em R$(use vírgula):\n");
				scanf("%f",&valor);
				printf("\nO valor do produto com desconto é: %.2f R$\nO valor da comissão do vendedor (5pct)é igual a: %.2f R$",valor * 0.90,(valor * 0.90) * 0.05);
				
				break;
			default:
				printf("Digite um valor válido.");
				break;
		}
	
	return 0;
}

