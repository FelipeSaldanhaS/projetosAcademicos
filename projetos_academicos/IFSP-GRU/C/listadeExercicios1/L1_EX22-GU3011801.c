#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char letra;
	printf("Digite uma letra maiuscula para a converter em letra minuscula:\n");
	scanf("%c",&letra);
	
	letra = tolower(letra);
	
	printf("\n %c",letra);
	
	return 0;
}
