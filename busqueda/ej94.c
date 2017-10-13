// este programa ordena una lista dada de enteros en orden incremental
// usando el metodo de insercion;

#include <stdio.h>

int storage[20];
int kount = 0;

void insertionSort()
{
	int insert;
	int vacancy;
	int i;

	for(i=1; i < kount; i++){
		insert = storage[i];
		vacancy = i;
		while(vacancy > 0 && storage[vacancy-1] > insert){
			storage[vacancy] = storage[vacancy-1];
			vacancy--;
		}
		if(vacancy != i){
			storage[vacancy] = insert;
		}
	}
}

void main(){
	int i;
	printf("Ingresa el numero de datos entre 2 y 20");
	scanf("%d", &kount);
	printf("Ingresa los %d enteros entre 0 y 30000", kount);
	printf("separado por espacios: \n");
	for(i=0; i < kount; i++){
		scanf("%d", &storage[i]);
	}
	fflush(stdin);
	insertionSort();
	printf("Lista ordenada");
	for (int i = 0; i < kount; ++i)
	{
		printf("%d ", storage[i] );
	}
	printf("gracias....");
}