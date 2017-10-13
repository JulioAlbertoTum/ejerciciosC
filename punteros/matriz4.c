// Devolviendo datos de un array usando punteros de una array 
// este programa usa punteros en array con punteros a enteros

#include <stdio.h>


int main(){
	int i, intArray[6];
	int *ptrArray[6];

	for(i=0; i<6; i++){
		intArray[i] = (i+2) * 100;
		ptrArray[i] = &intArray[i];
	}

	for(i =0; i<6; i++){
		printf("intArray[%d], Valor: %d, Direccion: %u\n", i, *(ptrArray[i]), ptrArray[i]);
	}

	return 0;
}