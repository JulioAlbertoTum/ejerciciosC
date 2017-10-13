#include <stdio.h>

// calcula las posibles combinaciones y permiutaciones
// de un conjunto de objetos

int fact(int);
int combinacion(int, int);
int permutacion(int, int);

int main()
{
	int n , r, c, p;
	char resp;

	do{
		do{
			printf("Ingresa el nro. total de objetos entre 1, 7: ");
			scanf("%d", &n);
		}while((n < 1)||(n > 7));

		do{
			printf("Ingresa el numero de objetos que seran agrupados a la vez: ");
			printf("( 1 <= r <= %d): ", n);
			scanf("%d", &r);
		}while((r < 1)||(r > n));

		c = combinacion(n, r);
		p = permutacion(r, r);

		printf("\nCombinaciones : %d", c);
		printf("\nPermutaciones : %d", p);
		fflush(stdin); // importante limpia el buffer de entrada que se le pasa
		printf("\nquieres continuar?(y/n): \n");
		scanf("%c", &resp);
	}while((resp == 'y')||(resp == 'Y'));
	printf("\nGracias.\n");

	return 0;
}

int combinacion(int n , int r){
	int c;
	c = fact(n) / (fact(r) * fact(n - r));
	return c;
}

int permutacion(int n, int r){
	int p;
	p = fact(n) / fact(n - r);
	return p;
}

int fact(int n){
	int i;
	int facto = 1;
	for(i = 1; i <= n; i++){
		facto = facto * i;
	}
	return facto;
}