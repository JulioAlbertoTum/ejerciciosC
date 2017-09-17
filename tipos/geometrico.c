#include <stdio.h>

// este programa imprime el patron geometrico en l pantalla.
main()
{
	int i , j, k, l, ord;
	char resp;
	do{
		do{
			printf("Ingresa el orden del patron (0 y 10): ");
			scanf("%d", &ord);
		}while((ord <= 0) || (ord >= 10));

		for(i = 1;i <= ord; i++){
			for( j = 1; j > i; j--){
				printf(" ");
			}
			for( k = i; k >= 1; k--){
				printf("%d", k);
			}
			for(l = 2; l <= i; l++){
				printf("%d", l);
			}
			printf("\n");
		}
		printf("Quieres continuar? (y/n) :");
		scanf(" %c", &resp);
	}while((resp == 'y')||( resp == 'Y'));

	printf("Gracias.\n");

	return 0;
}