#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float valS, impS;
	
	printf("Digite o valor do sal�rio-base (em R$, use v�rgula): \n");
	
	scanf("%f", &valS);
	
	impS = valS * 0.07;
	
	valS = (valS + (valS * 0.05)) - impS;
	
	printf("\n Gratifica��o: 5pct\n Imposto sobre o sal�rio-base: 7pct\n O valor do sal�rio �: %.2f R$",valS);	
	return 0;
}


