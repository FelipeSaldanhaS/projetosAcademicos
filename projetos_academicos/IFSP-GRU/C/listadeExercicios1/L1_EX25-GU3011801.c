#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int secs,tempo;
	int horas=0;
	int sec=0;
	int min=0;
	scanf("%d",&secs);
	
	horas = secs/3600;
	
	if(secs == 3600){
		printf("\nHoras: %d", horas);
		printf("\nMinutos: %d", min);
		printf("\nSegundos: %d", sec);
		
	}
	else{
		tempo = secs - (3600 * horas);
		
		min = tempo / 60;
			if(min == 1){
				printf("\nHoras: %d", horas);
				printf("\nMinutos: %d", min);
				printf("\nSegundos: %d", sec);
			}
			else{
				tempo = secs - (3600 * horas) - (60 * min);
				
				sec = tempo;
						printf("\nHoras: %d", horas);
						printf("\nMinutos: %d", min);
						printf("\nSegundos: %d", sec);
					}
			}
	

	
	
	

	return 0;
}
