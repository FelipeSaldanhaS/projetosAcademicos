#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float valS;
	
	printf("Digite o valor do sal�rio que sofrer� aumento: \n");
	
	scanf("%f", &valS);
	
	valS = valS + ((valS/100) * 25);
	
	printf("O valor do sal�rio com aumento de 25pct �: %.2f R$",valS);	
	return 0;
}

