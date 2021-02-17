#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x,y,dist;
	
	printf("\n Calculo de distancia da origem:\n");
	
	printf("\nDigite o valor da coordenada X:\n");
	scanf("%f", &x);
	printf("\nDigite o valor da coordenada Y:\n");
	scanf("%f", &y);
	
	dist = sqrt(pow(x,2) + pow(y,2));
	
	printf("\n Distancia = %f", dist);
	
	return 0;
}
