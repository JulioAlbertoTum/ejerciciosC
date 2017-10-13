// Este programa ordena una lista dada de enteros desordenados 
// usando el metodo shell sort

#include <stdio.h>

int storage[20];
int kount = 0;

void shellSort(){
	int in, out;
	int insert; 
	int gap = 1;
	int elements = kount;
	int i = 0;
	while(gap <= elements/3){
		gap = gap * 3 + 1;
	}

	while(gap > 0){
		for(out = gap; out < elements; out++){
			insert = storage[out];
			in = out;
			while(in > gap -1 && storage[in - gap] >= insert){
				storage[in] = storage[in - gap];
				in -= gap;
			}
			storage[in] = insert;
		}
		gap = (gap - 1) / 3;
		i++;
	}
}

void main(){
	int i;
	printf("Ingrese el numero de items en la lista entre 2  y 20: ");
	scanf("%d", &kount);
	printf("Ingrese los %d enteros entre 0  y 30000  ", kount);
	printf("separado por espacios: \n");
	for (i = 0; i < kount; i++)
	{
		scanf("%d", &storage[i]);
	}

	fflush(stdin);
	shellSort();
	printf("Lista ordenada: ");
	for (i = 0; i < kount; i++)
	{
		printf("%d ", storage[i]);
	}
	printf("\nGracias.\n");
}

