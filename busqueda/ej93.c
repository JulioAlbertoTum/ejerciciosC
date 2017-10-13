// ordenar un arreglo de valores usando el metodo de la burbuja
// en orden creciente

#include <stdio.h>

int storage[20];
int kount = 0;

void bubbleSort()
{
	int temp;
	int i, j;
	int swap = 0; // 0 el false y 1 true
	for(i=0; i < kount-1; i++){
		swap = 0;
		for(j=0; i <kount-1-i; j++){
			if(storage[j] > storage[j+1]){
				temp = storage [j];
				storage[j] = storage[j+1];
				storage[j+1] = temp;
				swap = 1;
			}
		}
		if(!swap){
			break;
		}
	}
}

void main(){
	int i;
	printf("Ingresa el numero de items de a lista entre 2 y 20:");
	scanf("%d", &kount);
	printf("Ingresa los %d enteros entre 0 y 30000 ", kount);
	printf("separado por espacios: \n");
	for(i=0; i < kount; i++){
		scanf("%d", &storage[i]);
	}
	fflush(stdin);
	bubbleSort();
	printf("Lista ordenada: ");
	for(i =0; i < kount; i++)
		printf("%d", storage[i]);
	printf("\nGracias.\n");
}