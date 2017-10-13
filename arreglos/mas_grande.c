#include <stdio.h>

// Ester programa calcula el elemennto mas grnade e una arraya de enterso 

int largest(int xList[], int low, int up);

int main(){
	int n, i, miLista[15];
	do{
		printf("Ingrese la longitud del array 2, 14: ");
		scanf("%d", &n);
	}while((n < 2) || ( n >14));

	printf("Ingrese %d elementos: ", n);
	for(i = 0; i < n; i++){
		scanf("%d", &miLista[i]);
	}

	printf("El elemento mas grande es: %d", largest(miLista,0,(n-1)));
	printf("\n Gracias. \n");
	return 0;
}

int largest(int xList[], int low, int up){
	int max;
	if( low == up)
		return xList[low];
	else{
		max = largest(xList, low+1, up);
		if(xList[low] >= max)
			return xList[low];
		else
			return max;
	}
}