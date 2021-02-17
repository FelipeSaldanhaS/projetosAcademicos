	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	
	/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	int main(int argc, char *argv[]) {
		
		setlocale(LC_ALL, "Portuguese");
		
		int horas, min, sec , horasf, minf, secf;
		int dura,tempo;
		int secsi,secsf;
		
		printf("Hora inicial(max:23): \n");
		scanf("%d",&horas);
		if(horas>23){
			horas = 0;
		}
		
		printf("Minutos iniciais(max:59): \n");
		scanf("%d",&min);
		if(min>59){
			min = 0;
		}
		printf("Segundos iniciais:(max:59) \n");
		scanf("%d",&sec);
		if(sec>59){
			sec = 0;
		}
		
		secsi = (horas * 3600) + (min * 60) + sec;
		printf("Horario inicial: %d : %d: %d, em segundos: %d \n",horas , min, sec, secsi);
		
		
		printf("Duração do experimento(em segundos): \n");
		scanf("%d", &dura);
		
		secsf = secsi + dura;
		
			horasf = secsf/3600;
			
			if(horasf == 24){
				horasf = 0;
			}
		 if(horasf > 24){
		 	horasf = horasf - 24;
		 }
		if(secsf == 3600){
			printf("Horario final: %d : %d: %d, em segundos: %d \n",horasf, minf, secf, secsf);
			
		}
		else{
			horasf = secsf/3600;
			tempo = secsf - (3600 * horasf);
			if(horasf == 24){
				horasf = 0;
			}
				 if(horasf > 24){
		 	horasf = horasf - 24;
		 }
			minf = tempo / 60;
			
				if(minf == 1){
			printf("Horario final: %d : %d: %d, em segundos: %d \n",horasf, minf, secf, secsf);
				}
				else{
					horasf = secsf/3600;
					tempo = secsf - (3600 * horasf) - (60 * minf);
							if(horasf == 24	){
				horasf = 0;
			}
				 if(horasf > 24){
		 	horasf = horasf - 24;
		 }
					secf = tempo;
							printf("Horario final: %d : %d: %d, em segundos: %d \n",horasf, minf, secf, secsf);
						}
				}
		return 0;
	}
