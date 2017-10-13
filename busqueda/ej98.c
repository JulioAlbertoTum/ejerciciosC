// este programa ordena una lista de enteros desordenados
// usando el metodo quick sort

#include <stdio.h>

int storage[20];
int kount = 0;

void swap(int n1, int n2)
{
	int temp = storage[n1];
	storage[n1] = storage[n2];
	storage[n2] = temp;
}

int partition(int left, int right, int pivot)
{
	int lptr = left - 1;
	int rptr = right;

	while(1){
		while(storage[++lptr] < pivot){

		}
		while(rptr > 0 && storage[--rptr] > pivot){

		}
		if(lptr >= rptr)
			break;
		else
			swap(lptr, rptr);
	}
	swap(lptr, right);
	return lptr;
}

void quickSort(int left, int right){
	int pivot, partPt;
	if(right - left <= 0){
		return;
	}else{
		pivot = storage[right];
		partPt = partition(left, right, pivot);
		quickSort(left, partPt - 1);
		quickSort(partPt+1, right);
	}
}

void main(){
	int i;
	printf("Ingresa el numero de items entre 2 y 20: ");
	scanf("%d", &kount);
	printf("Ingresa los %d enteros entre 0 y 30000 ", kount);
	printf("separado por espacios: \n");
	for (i = 0; i < kount; i++)
	{
		scanf("%d", &storage[i]);
	}
	fflush(stdin);
	quickSort(0, kount - 1);
	printf("Lista ordenada: ");
	for (i = 0; i < kount; i++)
	{
		printf("%d ", storage[i]);
	}
	printf("\n Gracias. \n");
}