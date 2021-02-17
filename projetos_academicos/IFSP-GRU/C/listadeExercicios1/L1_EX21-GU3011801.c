#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float altD,altT,degraus;
	
	printf("Digite a altura total que deseja atingir na escada: \n");
	scanf("%f",&altT);
	printf("Digite a altura de cada degrau: \n");
	scanf("%f",&altD);
	
	
	degraus = altT/altD;
	
	printf("\nQuantidade de degraus necessarios para atingir a altura total: %.1f",degraus);
	
	return 0;
}
