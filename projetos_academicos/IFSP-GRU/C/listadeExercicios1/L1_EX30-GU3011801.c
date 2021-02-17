#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float vald1,vald2,vald3,valt,val1,val2,val3;
	float premio;
	printf("Digite 3 valores para investir na loteria:\n");
	printf("Valor 1:\n");
	scanf("%f",&vald1);
	printf("Valor 2:\n");
	scanf("%f",&vald2);
	printf("Valor 3:\n");
	scanf("%f",&vald3);
	printf("Digite o valor do premio:\n");
	scanf("%f",&premio);
	
	valt = vald1+vald2+vald3;
	
	val1 = premio*vald1/valt;
	val2 = premio*vald2/valt;
	val3 = premio*vald2/valt;
	
	printf("Valores:\n");
	printf("Valor total:%.2f R$\n", valt);
	printf("Valor da primeira pessoa:%.2f R$\n", val1);
	printf("Valor da segundo pessoa:%.2f R$\n", val2);
	printf("Valor da terceira pessoa:%.2f R$\n", val3);
	
	return 0;
}
