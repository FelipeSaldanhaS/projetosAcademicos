#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nota,notaf;
	int i;
	
	printf("Digite as 4 notas para tirar uma media aritmetrica dos valores:\n");
	for(i=1;i<=4;i++){
		scanf("%f",&nota);
		notaf+=nota;
	}
	
	notaf=notaf/4;
	
	printf("Media final: %.2f", notaf);
	return 0;
}
