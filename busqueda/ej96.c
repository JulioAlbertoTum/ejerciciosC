// este programa ordena uan lista de enteros desordenados en orden
// incremental usando el metodo merge sort.


#include <stdio.h>

int storage[20];
int kount = 0;

void merge(int m1, int n1, int m2, int n2);


void  mergeSort(int m, int n)
{
	int mid;
	if( m < n){
		mid = (m+n)/2;
		mergeSort(m, mid);
		mergeSort(mid+1, n);
		merge(m, mid, mid+1, n);
	}
}

void merge(int m1, int n1, int m2, int n2){
	int tmpstorage[40];
	int m, n, k;
	m = m1;
	n = m2;
	k = 0;
	while(m <= n1 && n <= n2){
		if(storage[m] < storage[n])
			tmpstorage[k++] = storage[m++];
		else
			tmpstorage[k++] = storage[n++];
	}
	while(m <= n1)
		tmpstorage[k++] = storage[m++];
	while(n <= n2)
		tmpstorage[k++] = storage[n++];
	for ( m=m1,n=0; m <= n2;m++,n++)
	{
		storage[m] = tmpstorage[n];
	}
}


void main()
{
	int kount, i;
	printf("Ingrese el numero de elementos  entre 2 y 20: ");
	scanf("%d", &kount);
	printf("Ingresa los %d enteros entre 0 y 30000 ", kount);
	printf("separado por espacios: \n");
	for (i = 0; i < kount; i++)
	{
		scanf("%d", &storage[i]);
	}
	fflush(stdin);
	mergeSort(0, kount-1);
	printf("lista ordenada: ");
	for (i = 0; i < kount; i++)
	{
		printf("%d ", storage[i]);
	}
	printf("\n gracias....\n");
}