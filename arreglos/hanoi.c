#include <stdio.h>

// resolucion del problema de las torres de hanoi
void move(int n, char from, char to, char temp);

int main(){
	int n;
	do{
		printf("\nIngresa 0 para terminar\n");
		do{
			printf( "Ingresa un numero entre 1 y 10: ");
			scanf("%d", &n);
		}while((n < 0) || (n > 10));
		if( n == 0)
			break;
		move(n,'L','R','C');
	}while(1);
	printf("Gracias.\n");
	return 0;
}

void move (int n, char from, char to, char temp){
	if(n > 0){
		move(n-1, from, temp, to);
		printf("Movemos el disco %d de %c a %c\n", n, from, to);
		move(n-1, temp, to, from);
	}
	return ;
}