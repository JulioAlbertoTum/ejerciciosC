#include <stdio.h>

/*
	Este programa calcula el seno de un angulo donde el angulo x
	esta en radianes y el rango de -1 y 1
*/
main(){
	double sine, term,x, z;
	int k, i, flag;
	char resp;

	do{
		do{
			flag = 0;
			printf("Ingrese un valor en radianes (-1, 1): ");
			scanf("%lf", &x);
			if((x < -1)||(x > 1))
				flag = 1;
		}while(flag); // fin del ciclo de ingreso de datos

		term = x;
		sine = x;
		k = 1;
		z =   x * x;

		for(i=1; i<= 10; i++){
			k = k + 2;
			term  = -term * z /(k*(k-1));
			sine = sine + term;
		}

		printf("Seno de %lf es %lf\n", x, sine);
		printf("Quieres continuar? (y/n) : ");
		scanf(" %c", &resp);
	}while((resp == 'y') || (resp == 'Y'));

	printf("Gracias.\n");
	return(0);
}