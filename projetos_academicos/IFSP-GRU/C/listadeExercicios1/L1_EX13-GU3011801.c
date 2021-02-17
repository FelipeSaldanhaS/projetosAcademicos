#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float altC, raioC, volC, pi = 3.141592;
	
	printf("Digite o valor da altura do cilindro: \n");
	
	scanf("%f", &altC);
	
	printf("Digite o valor do raio do cilindro: \n");
	
	scanf("%f", &raioC);
	
	volC = pow(raioC,2) * altC * pi;
	
	printf("\n O volume do cilindro tem como valor: %f", volC);
		
	return 0;
}
