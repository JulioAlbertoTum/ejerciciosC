#include <stdio.h>

main(){
 	int n1, i, flag;
	long int fa, fb, fc, fd;
	char resp;

	do{
		do{
			flag = 0;
			printf("Ingrese un numero entre (0 < N <= 45): ");
			scanf("%d", &n1);
			if((n1 <= 0)||(n1 > 45))
				flag = 1;
		}while(flag); // fin del loop de entrada de datos

		fa = 0;
		fb = 1;
		printf("Secuencia de Fibonacci:\n");

		for(i =1; i <= n1; i++){
			printf("%d -esimo termino es: %ld\n",((i*2) -1), fa);
			if(((i*2) - 1) == n1) break;
			printf("%d -esimo termino es: %ld\n", (i*2), fb);
			if((i*2) == n1) break;
			fc = fa + fb;
			fd = fb + fc;
			fa = fc;
			fb = fd;
		}

		printf("Quieres continuar? (y/n): ");
		scanf(" %c", &resp);
	}while((resp == 'y')||(resp == 'Y'));

	printf("Gracias. \n");
	return(0);
}