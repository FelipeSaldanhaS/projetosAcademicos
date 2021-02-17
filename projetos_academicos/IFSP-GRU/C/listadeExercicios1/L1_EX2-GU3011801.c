#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int v1,v2,v3;
	int vf;
	
	printf("\nDigite 3 valores para serem somados: \n");
	
	scanf("%d %d %d", &v1,&v2,&v3);
	
	vf=v1+v2+v3;
	
	printf("\nValor da soma: %d\n",vf);
	
	return 0;
}
