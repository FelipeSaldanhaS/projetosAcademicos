#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int datanasc, data, idade;
	
	printf("\nDigite o ano atual\n");
	scanf("%d", &data);
	
	printf("\nDigite a sua idade atual\n");
	scanf("%d", &idade);
	
	datanasc = data - idade;
	printf("\nData de nascimento: %d", datanasc);
	
	return 0;
}
