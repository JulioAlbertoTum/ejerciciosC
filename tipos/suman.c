#include <stdio.h>

/*
	programa que toma un numero entero limite 
	y calcula la suma entre este valor y 0
	ademas pregunta si desea continuar y/n
*/
main(){
	int limite, i, flag;
	unsigned long int suma;
	char resp;

	do{
		do{
			flag = 0;
			printf("Ingrese un numero entre (0 < N < 30000): ");
			scanf("%d", &limite);
			if((limite <= 0) || (limite > 30000))
				flag = 1;
		}while(flag);

		suma = 0;

		for(i = 1; i <= limite; i++){
			suma = suma + i;
		}

		printf("La suma requerida es: %lu\n", suma);
		printf("Quieres continuar? (y/n): ");
		scanf(" %c", &resp);
	}while((resp == 'y') || (resp == 'Y'));

	printf("Gracias.\n");
	return(0);
}