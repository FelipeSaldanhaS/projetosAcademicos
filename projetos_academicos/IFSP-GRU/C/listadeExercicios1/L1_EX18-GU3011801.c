#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float sal;
	int horas;
	
	
	printf("Digite o sal�rio que o funcion�rio ir� receber por hora (em R$, use v�rgula): \n");
	
	scanf("%f",&sal);
	
	printf("Digite o n�mero de horas que o funcion�rio ir� trabalhar: \n");
	
	scanf("%d",&horas);
	
	sal = (sal * horas) * 1.10;
	
	printf("\n O valor a ser pago ao funcion�rio, acresentado 10pct do valor total: %.2f R$", sal);
	return 0;
}

