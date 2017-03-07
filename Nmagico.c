#include <stdio.h>
#include <stdlib.h>

int NumMagico(int maxintentos, int *historia);

int main(){
	int intentos, i;
	int hist[100];
		intentos= NumMagico(10, hist);
	if(intentos>0){
		printf("Ganaste tu historial es: \n");
		for(i=0; i<intentos; i++){
			printf("%d\n", hist[i]);
		}
	}
	else{
		printf("fallaste");
	}
}

int NumMagico(int maxintentos, int *historia){
	int i=-1, intentos;
	srand (time(NULL));
	int Nmagico= rand() % 101;
	int Nmagico2= rand() % 101;
	int Npuesto;
	printf("Encuentra el numero Magico: ");
	scanf("%d", &Npuesto);
	if(Npuesto==Nmagico || Npuesto==Nmagico2){
		printf("Correcto, El numero %d es el numero magico\n", Npuesto);
		maxintentos--;
		do{
         	    	historia[0]=Npuesto;
        } 
        while(i==11);
        intentos= 10- maxintentos;
        return intentos;
	    }
	else
		do{
			maxintentos--;
			i++;
			if(maxintentos==0){
				printf("el juego a terminado, sus intentos fueron: %d", *historia);
				return -1;
			}
			if(Nmagico<Npuesto&&Npuesto<Nmagico2){
         	    printf("el numero se encuentra en la mitad de los dos numeros \n");
         	    historia[i]=Npuesto;
         	}
			if(Npuesto<Nmagico){
				printf("El numero magico 1 es mayor a %d, Intente de nuevo: \n", Npuesto);
				historia[i]=Npuesto;
			}
			if(Npuesto<Nmagico2){
				printf("El numero magico 2 es mayor a %d, Intente de nuevo: \n", Npuesto);
					historia[i]=Npuesto;
			}
			if	(Npuesto>Nmagico){
				printf("El numero magico 1 es menor a %d, Intente de nuevo: \n", Npuesto);
				historia[i]=Npuesto;
			}
			if(Npuesto>Nmagico2){
				printf("El numero magico 2 es menor a %d, Intente de nuevo: \n", Npuesto);
					historia[i]=Npuesto;
			}
			if(Npuesto==Nmagico || Npuesto==Nmagico2 || Npuesto==Nmagico*Nmagico2 || Npuesto== Npuesto+Nmagico2 || Npuesto== Nmagico- Nmagico2){
				printf("Correcto, El numero %d es uno de los numero magico\n", Npuesto);
         	    historia[i]=Npuesto;

			}
			if(Npuesto!=Nmagico &&  Npuesto!=Nmagico2){
			scanf("%d", &Npuesto);
			}
		}
		while(Npuesto!=Nmagico && Npuesto!=Nmagico2);
	intentos= 10- maxintentos;
	return intentos;
}

