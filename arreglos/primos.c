#include <stdio.h>
#include <math.h>
#define SIZE  1000

int status[SIZE];

void sieve(){
	int i, j, sq;
	for(i=0; i < SIZE; i++){
		status[i] = 0;
	}

	sq = sqrt(SIZE);

	for(i=4; i <= SIZE; i +=2){
		status [i] = 1;
	}

	for(i = 3; i <= sq; i += 2){
		if(status[i] == 0){
			for(j = 2*i; j <= SIZE; j+= i){
				status[j] = 1;
			}
		}
	}
	status[1] = 1;
}

int main(){
	int i , n;
	sieve();
	do{
		printf("\n\n Ingresa un numero entre (1 y 1000): ");
		scanf("%d",&n);
	}while(( n < 1)||( n > 1000));
	printf("\n  los siguientes numeros son primos en el rango de 1 a %d : \n",n);

	for( i=1; i < n; i++){
		if(status[i] == 0) printf("%d\t",i);
	}
	printf("\nGracias.\n");

	return 0;
}