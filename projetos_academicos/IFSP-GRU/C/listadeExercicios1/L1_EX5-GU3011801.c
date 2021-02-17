#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int val1,val2,val3,valf;
	
	printf("Digite o valor para 3 variaveis para fazer a soma do quadrado delas: \n");
	
	scanf("%d %d %d",&val1,&val2,&val3);
	
	val1=val1*val1;
	val2=val2*val2;
	val3=val3*val3;
	
	valf=val1+val2+val3;
	
	printf("Valor final da soma dos quadrados das variaveis (%d, %d, %d): %d", val1,val2,val3,valf);
	return 0;
}
