#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float G,R;
	
	printf("Digite um angulo em graus para ser convertido em radianos: \n");
	scanf("%f",&G);
	
	R = (G * 3.141592)/180;
	
	printf("\nRadianos: %.3f", R);
	
	return 0;
}

