#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	
	int valint;
	float valreal;
	
	printf("\n Digite um valor inteiro:\n");
	scanf("%d",&valint);
	printf("\nValor do numero inteiro: %d\n", valint);
	
	printf("\n Digite um valor real:\n");
	scanf("%f", &valreal);
	printf("\nValor do numero real: %f \n", valreal);
	return 0;
}
