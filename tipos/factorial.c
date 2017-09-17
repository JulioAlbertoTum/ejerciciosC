#include <stdio.h>
/*
	calcula el factorial de un numero
	mediante un metodo iterativo.
*/

main(){
	int n, i, flag;
	unsigned long int factorial;
	char resp;

	do{
		do{
			flag = 0;
			printf("Ingrese un numero entre 0 y 12: ");
			scanf("%d", &n);
			if((n <= 0) || (n > 12))
				flag  = 1;
		}while(flag);

		factorial = 1;

		for(i=1; i <= n; i++){
			factorial = factorial * i;
		}

		printf("El factorial es: %lu\n", factorial);
		printf("Quieres continuar? (y/n) : ");
		scanf(" %c", &resp);
	}while((resp == 'y') || (resp == 'Y'));
	printf("Gracias. \n");
	return(0);
}