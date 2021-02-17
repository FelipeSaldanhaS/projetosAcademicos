#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1,n2,n3;
	int matr;
	float notaf;
	
	printf("\nDigite sua matricula: \n");
	scanf("%d", &matr);
	
	printf("\nDigite suas notas em sequencia(n1,n2,n3): \n");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	
	notaf = (n1+n2+(n3*2))/4;
	
	if(notaf >= 60){
		printf("Aluno(a) da matricula: %d, voce foi aprovado com %.2f pontos.", matr, notaf);
	}
	else{
		printf("Aluno(a) da matricula: %d, voce foi reprovado com %.2f pontos.", matr, notaf);
	}
	
	return 0;
}
