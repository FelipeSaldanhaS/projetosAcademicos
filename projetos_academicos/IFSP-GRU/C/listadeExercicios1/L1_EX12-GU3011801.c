#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, hipo;
	
	printf("Digite o valor para o cateto A e B: \n");
	
	scanf("%f %f", &a, &b);
	
	hipo = sqrt( pow(a,2) + pow(b,2) );
	
	printf("\nValor da hipotenusa: %f",hipo);
	
	return 0;
}
