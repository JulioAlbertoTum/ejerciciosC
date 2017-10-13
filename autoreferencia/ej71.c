// este programa usa la funcion calloc() para la asignacion 
// dinamica de memoria

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i, j;
	int *ptr, *list[10];

	printf("Ingrese un entero como tamanio para la lista entre 1y 20: ");
	scanf("%d", &n);
	for(i =0 ; i < 10; i++){
		list[i] = (int *)calloc(n, sizeof(int));
		for(j = 0; j < n; j++)
			*(list[i] + j) = i + j + 10;
	}

	printf("Mostramos  los valores de los items de la lista\n");
	for(i=0; i < 10; i++){
		printf("List[%d]: ", i);
		for(j = 0; j < n; j++){
			printf("%d ", *(list[i] + j));
		}
		printf("\n");
	}

	return 0;
}