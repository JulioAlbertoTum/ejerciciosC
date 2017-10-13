// Este programa realiza una busqueda binario para enocntrar elementos
//  a partir de un conjunto ordenado de valores

#include <stdio.h>

int storage[50];
int kount = 0;

int searchData(int intData)
{
	int lowBound = 0;
	int upBound = kount - 1;
	int midpoint = -1;
	int compare = 0;
	int num = -1;
	while(lowBound <= upBound){
		compare++;
		midpoint = lowBound + (upBound - lowBound) / 2;
		if(storage[midpoint] == intData){
			num = midpoint;
			break;
		}else{
			if(storage[midpoint] < intData){
				lowBound  = midpoint + 1;
			}else{
				upBound = midpoint - 1;
			}
		}
	}

	printf("Total de comparaciones hechas: %d", compare);
	return num;
}

void main(){
	int position, data, i;
	printf("Ingresa el numero de datos a almacenar entre 2 y  50: ");
	scanf("%d", &kount);
	printf("Ingresa los %d enteros entre 0  y 30000 ", kount);
	printf("En orden creciente \n");
	for(i=0; i<kount; i++){
		scanf("%d", &storage[i]);
	}
	fflush(stdin);
	printf("Ingresa el elemento que hay que buscar entrre 0 y 30000: ");
	scanf("%d", &data);
	position = searchData(data);
	if(position != -1){
		printf("Elemento encontrado en la posicion %d", (position + 1));
	}else{
		printf("el elemento no ha sido encontrado");
	}
}