#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float pi = 3.141592, raio, areaC;
	
	printf("Digite o valor do raio do circulo: \n");
	
	scanf("%f",&raio);
	
	areaC = (raio * raio) * pi;
	
	printf("\n O valor da area do circulo: %f", areaC);
	
	return 0;
}
