#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float valP;
	
	printf("Digite o valor do produto que sofrerá desconto: \n");
	
	scanf("%f", &valP);
	
	valP = valP - ((valP/100) *12);
	
	printf("O valor do produto com desconto de 12pct é: %.2f R$",valP);	
	return 0;
}
