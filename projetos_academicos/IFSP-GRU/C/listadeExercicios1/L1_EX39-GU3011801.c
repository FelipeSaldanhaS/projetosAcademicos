#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float k,m;
	
	printf("Digite um valor em quilometros para ser convertido em milhas:\n");
	scanf("%f", &k);
	
	m = k/1.61;
	
	
	printf("\nMilhas: %.2f", m);
	return 0;
}
