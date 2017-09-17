#include <stdio.h>
#include <math.h>

main(){
	int flag, esPrimo;
	long int n, m, i;

	do{
		do{
			flag = 0;
			printf("Ingrese 0 para terminar.\n");
			printf("Ingrese un numero N \n");
			printf("Para encontrar si es primo o no: ");
			scanf("%ld", &n);
			if(n == 0) break;
			if((n < 2) || (n > 2000000000))
				flag = 1;
		}while(flag);  // fin entrada de datos

		if( n == 0) break;
		if( n == 2){
			printf("\n2 es un numero primo\n\n");
			continue;
		}

		esPrimo = 1;
		m = ceil(sqrt(n));
		for(i = 2; i <= m; i++){
			if((n % i) == 0){
				esPrimo = 0;
				break;
			} 
		}

		if(esPrimo)
			printf("\n%ld es un numero primo\n\n", n);
		else
			printf("\n%ld no es un numero primo \n\n", n);
	}while(1);

	printf("\nGracias.\n");
	return(0);
}