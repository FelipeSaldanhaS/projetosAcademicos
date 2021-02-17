#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int val,i;
	
	int vet[4]={0,0,0,0};
	
		printf("\nDigite um valor inteiro de 4 digitos para imprimir cada digito em uma linha:");
	
	scanf("%d",&val);
	
	printf("\n");
	
	for (i = 0; i < val/1000; i++){
		vet[0]++;
	}
	for (i = 0; i < (val/100)-vet[0]*10; i++){
		vet[1]++;
	}
	for (i = 0; i <  (val/10)-(vet[0]*100 + vet[1]*10); i++){
		vet[2]++;
	}
	for (i = 0; i < val-(vet[0]*1000 + vet[1]*100 + vet[2]*10); i++){
		vet[3]++;
	}
	
	printf("%d\n",vet[0]);
	
	printf("%d\n",vet[1]);
	
	printf("%d\n",vet[2]);
	
	printf("%d",vet[3]);
	return 0;
}
