// usa el nombre del array y dereferenciar el operador * para devolver
// los valores almacenados en el array unidimensional

#include <stdio.h>

int main(){
	int marks[] = {72, 56, 50, 80, 92};
	int i;
	printf("Valores almacenados en el array \n");
	for(i = 0; i < 5; i++)
		printf("Elemento no. %d, value %d\n", i+1, *(marks+i));

	printf("\nValor del array-name mark: %u\n\n",marks);

	printf("Direcciones de los elementos del array:\n");
	for(i=0; i<5; i++)
		printf("Direccionado de elementos marks[%d]: %u\n",i, &marks[i]);
	return 0;
}

