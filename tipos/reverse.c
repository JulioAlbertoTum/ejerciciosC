#include <stdio.h>

/*
	Este programa calcula el inverso de un numero entero.
*/
main(){
	long int n , temp, remainder, reverse;
	char resp;
	do{
		do{
			printf("Ingrese un numero (0 < N <= 30000): ");
			scanf("%ld", &n);
		}while((n <= 9)||(n > 30000));

		temp = n;
		reverse = 0;

		while( temp > 0){
			remainder = temp % 10;
			reverse = reverse*10 + remainder;
			temp /= 10;
		}

		printf("La inversea de %ld es %ld.\n",n,reverse);
		printf("Quieres continuar? (y/n) : ");
		scanf(" %c", &resp);
	}while((resp == 'y')||(resp == 'Y'));

	printf("Gracias. \n");

	return 0 ;
}