#include <stdio.h>
#include <math.h>

main()
{
	double a, b, c, d, r1, r2;
	char resp;
	do{
		printf("Ingresa el valor de a, b, y c: ");
		scanf("%lf, %lf, %lf", &a, &b, &c);

		d = b*b - 4 * a * c;
		if(d == 0){
			r1 = (-b)/(2 * a);
			r2 = r1;
			printf("Las raices son reales e iguales\n");
			printf("Raiz1 = %f, Raiz2 = %f\n", r1, r2);
		}else if(d > 0){
			r1 = - (b + sqrt(d)) / (2*a);
			r2 = - (b - sqrt(d)) / (2*a);
			printf("Las raices son reales y distintas\n");
			printf("Raiz1 = %f, Raiz2 = %f\n", r1, r2);
		}else{
			printf("Las raices son imaginarias\n");
		}
		printf("Quieres continuar? (y/n) : ");
		scanf(" %c", &resp);
	}while((resp == 'y') || ( resp == 'Y'));
	printf("Gracias.\n");
	return 0;
}