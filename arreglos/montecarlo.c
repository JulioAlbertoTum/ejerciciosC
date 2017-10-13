#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
	hallamos el valor de pi mediante el metodo de montecarlo
*/

main()
{
	int p, circle, square, toss, rm, i;
	float pi, x, y, r;
	char resp;

	rm = RAND_MAX;

	do{
		circle = 0;
		do{
			printf("Ingresa el numero de tosses (2<= n <=5000): ");
			scanf("%d", &toss);
		}while((toss < 2)||( toss > 5000));
		square = toss;
		for(i=0; i< toss; i++){
			p = rand();
			x = ((float)p)/rm;
			p = rand();
			y = ((float)p)/rm;
			r = sqrt((x * x) + (y * y));
			if(r <= 1){
				circle = circle + 1;
			}
		}
		pi = 4 * ((float) circle) / square;
		printf("\nEl valor de pi es: %f\n", pi);
		printf("Quieres continuar? (y/n) : ");
		scanf(" %c", &resp);
	}while((resp == 'y') || (resp == 'Y'));

	printf("Gracias. \n");
	return 0;	
}