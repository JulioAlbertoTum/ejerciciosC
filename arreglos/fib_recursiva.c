#include <stdio.h>
// este programa calcula la serie de fibonacci recursivamente.
int fib(int p);

int main()
{
	int k, n;
	do{
		printf("Ingresa un numero entre 1 y 24: ");
		scanf("%d",&n);
	}while( n < 1 || n > 24);

	printf("Los primeros %d numeros de fibonacci son: \n", n);
	for( k = 0; k < n; k++){
		printf("\t%d ", fib(k));
		if(((k+1) % 6) == 0) printf("\n");
	}
	printf("\nGracias.\n");
	return 0;
}


int fib(int p)
{
	if( p <= 0)
		return 0;
	else if (p == 1)
		return 1;
	else 
		return fib(p - 1) + fib(p - 2);
}

