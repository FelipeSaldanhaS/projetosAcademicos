#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int valor;
	
	printf("Digite um numero: \n");
	
	scanf("%d", &valor);
	
	
	printf("Antecessor: %d e Sucessor: %d ,de %d, sendo a soma do antecessor X 2 com sucessor X 3: %d\n",valor-1, valor+1, valor, ((valor-1)*2 +(valor+1)*3));	
		
	return 0;
}
