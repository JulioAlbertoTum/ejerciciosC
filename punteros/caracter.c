// el programa devuele el dato almacenado en un  array char unidimenisonal
// y de tipo double usando punteros

#include <stdio.h>

int main(){
	char text[] = "Hello";
	double num[] = {2.4, 5.7, 9.1, 4.5, 8.2};
	int i;
	printf("los valores almacenados en  los elementos del arary text.\n");
	for(i=0; i < 5; i++)
		printf("Elemento nro. %d, value: %c\n", i+1, *(text+i));

	printf("\n Valores almacenados en elementos del array num.\n");

	for(i=0; i < 5; i++)
		printf("elemento no. %d, valor: %.1f\n", i+1, *(num+i));

	printf("\nValor de array-name text: %u\n\n", text);
	printf("Direcciones de los elementos de array text: \n");
	for(i=0; i < 5; i++)
		printf("Direccion del elemento text[%d]: %u\n", i, &text[i]);

	printf("\nValor de array-name num: %u\n\n", num);

	printf("Direcciones de los elementos de array num: \n");
	for(i = 0; i <5; i++)
		printf("Direccion del elemento num[%d]: %u\n", i, &num[i]);

	return 0;
}