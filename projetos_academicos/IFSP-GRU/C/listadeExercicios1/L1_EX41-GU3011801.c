#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float G,R;
	
	printf("Digite um valor em radianos para ser convertido em um angulo de graus: \n");
	scanf("%f",&R);
	
	G = (R * 180)/3.141592;
	
	printf("\nGraus: %.3f", G);
	
	return 0;
}

