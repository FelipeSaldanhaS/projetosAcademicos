#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float valorL,valorA;
	
	printf("Digite um valor para o lado do quadrado: \n");
	
	scanf("%f", &valorL);
	
	valorA = valorL * valorL;
	
	printf("O valor da area do quadrado: %f",valorA);
	return 0;
}
