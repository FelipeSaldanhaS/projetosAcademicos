#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	
	float cotDolar,valReal,valFinal;
	
	printf("\nLembre-se de usar virgula inv�s de ponto\n");
	printf("Digite a cota��o do dol�r americano(US$).\n");
	scanf("%f",&cotDolar);
	printf("Digite um valor em reais(R$) que ser� convertido em dol�res americanos(US$).\n");
	scanf("%f",&valReal);
	
	valFinal=valReal/cotDolar;
	
	printf("O valor de %.2f R$ em dol�res � %.2f US$\n",valReal,valFinal);
	
	return 0;
}
