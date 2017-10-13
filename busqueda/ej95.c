// este programa  ordean una lista dada de enteros en orden incremental.
// usando el metodo de seleccion

#include <stdio.h>

int storage[20];
int kount;

void selectSort(){
	int i,j,k,temp, min;
	for (int i = 0; i < kount-1; i++)
	{
		min = storage[i];
		k = i;
		for (int j = i+1; j < kount; j++)
		{
			if(min > storage[j]){
				min = storage[j];
				k = j;
			}
		}
		temp =  storage[i];
		storage[i] = storage[k];
		storage[k] = temp;
	}
}

void main(){
	int i;
	printf("Ingresa el numero de datos entre 2 20: \n");
	scanf("%d", &kount);
	printf("Ingresa los %d enteros entre 0 y 30000 ",kount);
	printf("separara por espacios: \n");
	for (int i = 0; i < kount; i++)
	{
		scanf("%d", &storage[i]);
	}
	fflush(stdin);
	selectSort();
	printf("La lista ordenada: ");
	for (int i = 0; i < kount; i++)
	{
		printf("%d ", storage[i]);
	}

	printf("\nGracias.\n");
}